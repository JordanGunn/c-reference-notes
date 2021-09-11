//
// Created by User on 1/18/2021.
// include libraries
#include <stdio.h>

// hello world program example
//int main() {
//    printf("Hello World!");
//    return 0;
//}

// #include directives
// // preprocessor to insert contents from other files

// Each file has a "main" function that returns an int
// // main function can have arguments

// printf for printing to stdout

// return 0 indicates to the OS that the program ran successfully


// ----- BASIC STRUCTURE ----- //
// statements within a function end with a semicolon
// blocks of code are contained within curly brackets

// to compile and run from the CL
// // gcc -o helloWorld hello_world.c


// ----- GOOD PRACTICES ----- //
// Source file naming convention: snake case
// // e.g. hello_world.c

// ----- VARIABLES ----- //
int example1() {
    int courseNumber = 2510;
    printf("Course: Comp-%d\n", courseNumber);
    return 0;
}

// Data type   | Size
// ----------------------------------
// char        | 1 byte
// short       | 2 bytes (short int)
// int         | 4 bytes
// long        | 8 bytes (long int)
// float       | 4 bytes
// double      | 8 bytes
// long double | 16 bytes

// Strings ----->
// // multiple ways to declare a string
// >> char courseCode1[] = "Comp";

// square brackets[] are for arrays
// // can also do:
// >> char courseCode2[] = {'C', 'o', 'm', 'p'};

// multiple variables on one line
// >> int month, year = 11, day;

// boolean variables --->
// // must include header file
#include <stdbool.h>
int boolExample() {
    bool condition = true;
    printf("Condition:%d\n", condition);
    return 0;
}

// always name variables with camelCase


// ---------- FORMAT SPECIFIERS --------- //
// datatype      | format specifier
// ----------------------------------
// char & string | %c & %s
// short         | %hi
// int           | %i OR %d
// long          | %li
// float         | %f
// double        | %lf
// long double   | %Lf


// -------- NUMBERS -------- //
// default datatype for real numbers: double
// 5/4 is NOT a double
// 5.0 / 4 IS a double

// math library ----->
#include <math.h>

int mathExample() {
    double realNumber = 5.0 / 4;
    int one = floor(realNumber);
    int two = ceil(realNumber);
    printf("real number %lf, floor: %d, ceil: %d\n",realNumber, one, two);

    double power = pow(2.5, 2);
    printf("power: %0.2lf\n", power);
    return 0;
}

// -------- COMMENTS -------- //
/* this is a block
 * comment wow */

// use comments to describe complex functionality
// dont overuse comments

// ------- CONSTANTS ------ //
// // using macros --->
#define MY_LUCKY_NUMBER 5
int constExample() {
    printf("My lucky number is: %d\n", MY_LUCKY_NUMBER);
    return 0;
}

// // using const ---->
int const2Example() {
    const int MY_LUCKY_NUMBER2 = 5;
    printf("My lucky number is: %d\n", MY_LUCKY_NUMBER2);
    return 0;
}

// const is scoped - macros are global
// // you can get a pointer for const

// constants should always be CAPITAL_SNAKE_CASE


// ----- FUNCTIONS ------ //
// must declare void return type if returning nothing
void printHelloWorld() {
    printf("Hello World\n");
}

// can also declare functions at the top then call them within main
// // tells the compiler to look for this function
int square(int number);

// ** insert main function (calls square())

// ** write square function down here


// ----- CONDITIONAL STATEMENTS ----- //
// example of conditional
bool isPositive(int number) {
    if (number >= 0) {
        return true;
    } else {
        return false;
    }
}

// same as example above except using inline if-else syntax
bool isPositiveInline(int number) {
    return (number >= 0) ? true : false;
}

// ----- SWITCH STATEMENTS ----- //
int numberOfDaysInMonth(int monthNumber) {
    int days;
    switch(monthNumber) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 2:
        days = 28;
        break;
    default:
        days = 0;
    }
    return days;
}

// ----- ERROR HANDLING ----- //
// must include
// use perror
#include <stdlib.h>
double safeDivide(double numerator, double denominator) {
    if (denominator == 0) {
        perror("Division by zero!");
        exit(1);
    }
    return numerator / denominator;
}

// ----- LOOPING ----- //
// basic example of for-loop syntax
int power(int base, int exponent) {
    int result = 1;
    for(int number = 0; number < exponent; number ++) {
        result = result * base;
    }
    return result;
}

// ----- ARRAYS ----- //
int arrayExample() {
    int elements[] = {10, 20, 1, 3, -7};
    printf("First element: %d\n", elements[0]);
    elements[0] -= 2;
    printf("First element updated: %d\n", elements[0]);

    // declare array of size 3
    double realNumbers[3];
    realNumbers[0] = 0.2;
    realNumbers[1] = 2.33;

    return 0;
}








