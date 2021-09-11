//
// Created by User on 2/13/2021.
//
#include <stdio.h>

#ifndef LECTURE_CODE_LECTURE_3_COMMANDLINEARGS_H
#define LECTURE_CODE_LECTURE_3_COMMANDLINEARGS_H

#endif //LECTURE_CODE_LECTURE_3_COMMANDLINEARGS_H

int main(int argc, char* argv[]){
    // arg c defaults to the value of the arg count
    // from the command line.
    // the first arg is ALWAYS the name of the program
    // argv is ALWAYS am array of strings
    printf("argc = %d\n", argc);

    // you can get all arguments to the CL
    // by looping until the value of argc
    printf("Lets see whats in argv[]\n");
    // always perform check to see if arguments were
    // passed to the CL program.
    if (argc > 1) {
        for (int i = 0; i < argc; i++) {
            // can print the elements of the argv
            printf("argv[%d] = %s\n", i, argv[i]);
            // atoi() function can convert argument to integer
            sum += atoi(argv[i]);
        }
    }

    return 0;
}