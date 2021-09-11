//
// Created by User on 1/29/2021.
//

#ifndef LECTURE_CODE_LECTURE_3_POINTERS_REVISITED_H
#define LECTURE_CODE_LECTURE_3_POINTERS_REVISITED_H

void moveToNextChar(char * inputString) {

    // can move the pointer to next char
    inputString++;
    printf("Inside: %s\n", inputString);
    // can define a string as an array of characters
    char firstName[] = "Seyed";
    printf("Before: %s\n", firstName);

    inputString++;
    printf("Inside: %s\n", inputString);
    printf("After: %s\n", firstName);

}

#endif //LECTURE_CODE_LECTURE_3_POINTERS_REVISITED_H
