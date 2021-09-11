//
// Created by User on 1/18/2021.
//

#ifndef LECTURE_CODE_LECTURE_3_2D_ARRAYS_H
#define LECTURE_CODE_LECTURE_3_2D_ARRAYS_H

#define NUMBER_OF_ROWS 10
#define NUMBER_OF_COLUMNS 10

void fillMultiplicationTable(int table[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS]) {

    for (int rowNum = 1; rowNum <= NUMBER_OF_COLUMNS; rowNum++) {

        for (int columnNum = 1; columnNum <= NUMBER_OF_COLUMNS; columnNum++) {

            table[rowNum - 1][columnNum - 1] = rowNum * columnNum;
        }
    }
}

void printMultiplicationTable(int table[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS]) {

    for (int rowNum = 1; rowNum <= NUMBER_OF_COLUMNS; rowNum++) {
        for (int columnNum = 1; columnNum <= NUMBER_OF_COLUMNS; columnNum++) {
            printf("%4d", table[rowNum-1][columnNum-1]);
        }
    printf("\n");
    }
}

#endif //LECTURE_CODE_LECTURE_3_2D_ARRAYS_H
