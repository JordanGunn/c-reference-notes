//
// Created by User on 2/9/2021.
//

#ifndef LECTURE_CODE_LECTURE_3_SCANF_H
#define LECTURE_CODE_LECTURE_3_SCANF_H

#endif //LECTURE_CODE_LECTURE_3_SCANF_H

int scanfExample() {
    char firstName[20];
    // send string to stdout
    printf("Please enter your name:")
    // scan stdin for data and place in firstName variable
    scanf("%s", firstName)
    printf("Hello %s\n", firstName);

    // scanf can also take in multiple elements from stdin
    char fName[20];
    char lName[20];
    printf("Please Enter your first and last name: ");
    scanf("%s %s", fName, lName);

    // scanf can accept numbers, however the address specifier MUST
    // be passed to the argument in scanf
    int age;
    printf("Please enter your first name and your age:")
    scanf("%s %d\n", firstName, &age);
    printf("Hello %s. You are %d\n", firstName, age);

    // TO DEAL WITH THE ERROR ABOVE IN SCANF
    // we can use strtol (string to long)
    // strtol accepts params (1: the string, 2: a string to place non-numbers, 3: base)
    char * message = "10 more weeks to go!";
    long numberOfWeeks;
    char * restOfInput;
    // parsed long gets passed to numberOfWeeks
    numberOfWeeks = strtol(message, &restOfInput, 10);
    printf("Number of weeks remaining: %ld, rest of message: %s\n",numberOfWeeks, restOfInput);

    return 0;
}