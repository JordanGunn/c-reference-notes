//
// Created by User on 3/5/2021.
//

#ifndef LECTURE_CODE_LECTURE_8_PREPROCESSING_H
#define LECTURE_CODE_LECTURE_8_PREPROCESSING_H

/* PREPROCESSING BASICS -------------------
 * Preprocessing is a separate step before the C compiler
 * tries to make sense of your program
 * It is a simple text substitution + a bit of Logic
 * */

// common examples of preprocessing
// #include "filename.h" --> looks for this file in the current directory first.
// #include <filename.h> --> Look for the file in the system header files
// !! include replaces line with content of header file


/* MACROS AS FUNCTIONS -------------------
 * #define MACRO_NAME(A, B, C) text_with_A_B_C
 */
// example given
#define IS_POWER_OF_TWO(x) ((((x) - 1) & (x)) == 0)

void runPowerOfTwo(){
    printf("%d\n", IS_POWER_OF_TWO(10))
}

/* EXERCISE -------------------
 * Write a macro that finds the max of A and B
 */

#define MAX_OF_TWO_NUMBERS(a, b) (((a) > (b)) ? (a) : (b))
void runMaxOfTwo(){
    printf("%d\n", MAX_OF_TWO_NUMBERS(1, 2))
    printf("%d\n", MAX_OF_TWO_NUMBERS(2, 1))
}
#endif
