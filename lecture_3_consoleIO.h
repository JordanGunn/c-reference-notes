//
// Created by User on 2/9/2021.
//

#ifndef LECTURE_CODE_LECTURE_3_CONSOLEIO_H
#define LECTURE_CODE_LECTURE_3_CONSOLEIO_H

#endif //LECTURE_CODE_LECTURE_3_CONSOLEIO_H

int consoleIO () {

    // This program will sleep for 5 seconds, THEN print
    printf("Hello, world!");
    // disabling the buffer explicitly
    setbuf(stdout, NULL);
    sleep(5);

    // the buffer must be flushed explicitly to disable this
    // this can be done in multiple ways:
    // // // // // // // // // // // // //
    // 1. disabling the buffer explicitly
    setbuf(stdout, NULL);
    // 2. adding a newline char to end of string
    printf("Hello, World!\n")
    // 3. using scanf (see below)

    return 0;
}

void randomTidBits() {

    // define a string type
    typedef char * String;
    String myFirstName = "Jordan";
}



