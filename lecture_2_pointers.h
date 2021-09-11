//
// Created by User on 1/18/2021.
//
#include <stdio.h>

// ----- POINTERS ----- //
// lets write a function that swaps two integers
void swap_attempt(int firstNumber, int secondNumber) {
    int temporary = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temporary;
}

int first_main() {
    int first = 1, second = 2;
    swap_attempt(first, second);
    printf("First %d, Second %d\n", first, second);
    return 0;
}

// function will not work
// c function calls pass by VALUE
// C is copying the value of the variables
// values of variables in memory at the end of the program

// we must use PASS BY REFERENCE
// // to do this, we use POINTERS in C

// pointer syntax example
// >> int first = 1; >
// >> int *pointerToFirst = &first;
// ampersand says get the ADDRESS of the variable
// pointer basically says refer to an existing value
// rewriting the "swap" function witt pointers
void swap(int *firstPointer, int *secondPointer) {
    int temporary = *firstPointer;
    *firstPointer = *secondPointer;
    *secondPointer = temporary;
}

// calling the function in main NOTE AMPERSAND
int maino() {
    int first = 1, second = 2;
    swap(&first, &second);
    printf("First %d, Second %d\n", first, second);
    return 0;
}

// another example of how pointers work using a side by side comparison
// // >> int first = 1              | value = 1         | Address = 0xFFCCEE2 | * = N/A
// // >> int *firstPointer = &first | value = 0xFFCCEE2 | Address = N/A       | value = 1
void pointerExample() {
    int number = 1;
    int *pointerToNumber = &number;

    printf("Variable value: %d, Variable address: %p\n", number, &number);
    printf("Variable value: %p, Pointer reference value: %d\n", pointerToNumber, *pointerToNumber);
}

// lecture 2 - practice problem 1
// write a function that increments an integer's value by one.


// lecture 2 - practice problem 2
// what is the output of the following program?
void mysteryFunction(int *firstPointer, int *secondPointer) {
    int *temp = firstPointer;
    firstPointer = secondPointer;
    secondPointer = temp;
    *temp = 3;
}











