//
// Created by User on 2/13/2021.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#ifndef LECTURE_CODE_LECTURE_3_FILEIO_2_H
#define LECTURE_CODE_LECTURE_3_FILEIO_2_H

#endif //LECTURE_CODE_LECTURE_3_FILEIO_2_H

void fileIoExample() {

    // ----------------------------------------
    // EXAMPLE OF OPENING A FILE IN WRITE MODE
    // AND WRITING TEXT TO THE FILE...
    // ----------------------------------------
    // declare a pointer to a file
    FILE *pFile;
    // set the pointer equal to fopen
    // param1: filepath | param2: mode
    pFile = fopen("output.txt", "w");
    // if the pointer to the file is empty, quit the program
    // file could be open already
    if (pFile == NULL) {
        printf("Could not write to file");
        return;
    }
    // write to file using fprintf function
    // param1: file pointer | param2: char * to write
    fprintf(pFile, "hello world\n");

    // --------------------------------------------
    // FFLUSH INFORMATION
    // --------------------------------------------
    // file writing is inefficient
    // operating system creates a buffer to improve performance
    // the buffer is stored in MM. stores everything you write out
    // in the fprintf and stores until the buffer fills up.
    // once the buffer fills up, it automatically flushes the buffer
    // and writes it to disk. If the buffer is not yet full, and the program
    // quits, the data will not be written.
    // !! we can automatically flush the buffer by call fflush(FILE * pFile);
    // should only flush immediately if the data is highly important
    fflush(pFile);
    // make sure to close file, if you do not, the OS will not unlock the file
    // when you close a file, OS will flush the buffer immediately
    fclose(pFile)

    // ----------------------------------------------
    // FILE OPEN MODES
    // -----------------------------------------------
    // r: read from a file
    // w: write to a file
    // a: append to a file
    // rb: read from a binary file
    // wb: write to a binary file
    // ab: append to a binary file


    // =====================================================

    // ----------------------------------------------
    // SEQUENTIAL FILE READING
    // -----------------------------------------------

    // declare pointer to file
    FILE *pRFile;

    // assign file pointer to fopen
    pRFile = fopen("input.txt", "r");

    // handle any error encountered
    if (pRFile == NULL) {
        printf("File could not be opened");
        return;
    }

    // declare variable to hold data in file
    int num;

    // param1: file pointer | param2: data type | param3: address to variable holding data
    fscanf(pRFile, "%d", &num);

    // NOTE: we do not need to flush when doing file reading because
    // there is nothing in the buffer.
    fclose(pRFile);

    // =====================================================

    // ----------------------------------------------
    // READING ALL LINES IN A FILE
    // -----------------------------------------------

    // declare pointer to file
    FILE *pRAFile;

    // assign file pointer to fopen
    pRAFile = fopen("input.txt", "r");

    // handle any error encountered
    if (pRAFile == NULL) {
        printf("File could not be opened");
        return;
    }

    // loop through file and gather info
    // can call feof(pFile) to get end of file
    // we loop while saying while NOT at the end of the file
    while (!(feof(pRAFile))) {
        // read each integer in file one at a time
        fscanf(pRAFile, "%d", &num);
        // print out each integer
        printf("number = %d\n", num);
    }




    // =====================================================

    // ----------------------------------------------
    // GETTING CHARACTERS FROM FILE
    // COUNTING CHARACTERS IN A FILE
    // ----------------------------------------------
    // EOF represents End Of File ---> keyword
    // can get characters from file using fgetc(pFile)

    long getCharacterCount(char *fileName) {
        FILE *file = fopen(fileName, "r");
        if (file == NULL) {
            printf("Could not open file for reading.");
            return 0;
        }
        long characterCount = 0;
        char * character = fgetc(pFile)
        // example of looping through file and counting chars
        while (fgetc(file) != EOF) {
            characterCount++;
        }
        fclose(file);
        return characterCount;
    }

    // =====================================================

    // ----------------------------------------------
    // GETTING ALL CONTENTS OF A FILE AND
    // CONCATENATING INTO A STRING
    // ----------------------------------------------
    //

    #define MAX_LINE_SIZE  1000
    // define return type as bool to handle errors
    bool readFile(char *fileName, char content[MAX_LINE_SIZE]) {
        // create pointer to file
        FILE *file = fopen(fileName, "r");
        // handle any errors
        if (file == NULL) {
            printf("Could not open file for reading.");
            return false;
        }
        // !!!!!!! find out what this does !!!!!
        // assuming this initializes content with a value
        strcpy(content, "");
        // create variable to hold current line in loop
        char line[MAX_LINE_SIZE];
        // keep looping while fgets not returning NULL
        // fgets will pack contents of file into line
        // on each loop, within a max pointer distance of MAX_LINE_SIZE
        while (fgets(line, MAX_LINE_SIZE, file) != NULL) {
            // concatenate each iteration of line with content
            strcat(content, line);
        }
        fclose(file);
        return true;
    }

    // =====================================================

    // ----------------------------------------------
    // READING CONTENTS OF FILE DIRECTLY INTO
    // CHARACTER ARRAY USING fread()
    // WRITING CONTENT TO FILE DIRECTLY
    // USING fwrite()
    // ----------------------------------------------
    int fReadExample () {
        FILE *fp;
        char c[] = "this is how to use fread";
        char buffer[100];

        /* Open file for both reading and writing */
        fp = fopen("file.txt", "w+");

        /* Write data to the file */
        fwrite(c, strlen(c) + 1, 1, fp);

        /* Seek to the beginning of the file */
        // REWIND WILL MOVE POINTER BACK TO BEGINNING OF FILE
        rewind(fp);

        /* Read and display data */
        // fread ARGS ---->
        // <<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>
        // :arg1: pointer to variable that will hold data
        // :arg2: size in bytes of each arg !!add 1 for null char!!
        // :arg3: number of elements to read !!each one has size of arg2!!
        // :arg4: pointer to file being read
        fread(buffer, strlen(c)+1, 1, fp);
        printf("%s\n", buffer);
        fclose(fp);

        return(0);
    }
}









