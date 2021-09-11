//
// Created by User on 1/22/2021.
//
#include <stdio.h>

#ifndef LECTURE_CODE_LECTURE_THREE_FILE_IO_H
#define LECTURE_CODE_LECTURE_THREE_FILE_IO_H

void file_io() {
    // < ----- WRITING FILES ----- >

// creating a pointer to a file
    FILE * fpointer = fopen("employees.txt", "w");

// writing to a file
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting\n");

// always close a file, save the contents
    fclose(fpointer);

// <---- READING FILES ----- >

    char line[255];

// creating a pointer to a file
    FILE * rfpointer = fopen("employees.txt", "r");

// read file one line at a time (params: output_location, max_size, fpointer)
    fgets(line, 255, rfpointer); // first line
    fgets(line, 255, rfpointer); // second line
    printf("%s", line);

// always close a file, save the contents
    fclose(fpointer);
}



#endif //LECTURE_CODE_LECTURE_THREE_FILE_IO_H
