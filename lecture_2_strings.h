//
// Created by User on 1/19/2021.
//

#ifndef LECTURE_CODE_LECTURE_2_STRINGS_H
#define LECTURE_CODE_LECTURE_2_STRINGS_H

// ----- STRINGS ----- //
// strings as char arrays
// // >> char firstName[10] = "Seyed"

// strings can also be declared with POINTERS
// char *firstName = "Seyed"

// IMPORTANT: strings end with a null character: "\0"

// if you initialize a string using "*" (pointer)
// then the strings will be immutable

void initString() {
    char *pointerString = "Pointer!";
    char arrayString[] = "Array!";

    printf("Pointer String: %s, Array String: %s\n", pointerString, arrayString);
    arrayString[2] = '~';
    printf("Point String: %s, Array String: %s\n", pointerString, arrayString);

    // This is not allowed
    // pointerString[0] = 'J';
}

// you can move the pointer of a string
void printOneCharPerLine(char *string) {
    printf("%c\n", *string);
    while (*string) {
        printf("%c\n", *string++); // *string++ > move pointer to the next value
    }
}

// ----- LENGTH OF A STRING ----- //
#include <string.h>
size_t getStringLength(char *string) {
    size_t length = 0;
    while(*string++ && ++length); /* QQ: Can I change this length++? */
    // we can also get the length
    // strlen functions
    strlen("Hello");

    return length;

}

// ----- CONCAT A STRING ----- //
void concatString() {
    char firstString[10] = "good";
    char *secondString = "book";
    puts(strcat(firstString, secondString));
    strncpy(firstString, secondString, 3); // copies first  3 chars
    strncat(firstString, secondString, 2); // concats up to a certain char index
}

// ----- MORE STRING FUNCTIONS






#endif //LECTURE_CODE_LECTURE_2_STRINGS_H
