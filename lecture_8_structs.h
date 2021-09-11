//
// Created by User on 3/1/2021.
//

#ifndef LECTURE_CODE_LECTURE_8_STRUCTS_H
#define LECTURE_CODE_LECTURE_8_STRUCTS_H

#define max()

// a struct is a data structure composed of simpler data types
// like a class in java with no methods

struct point {
    int x;
    int y;
};

void printPoint(struct point p) {
    printf("(%d, %d)", p.x, p.y);
}

int runPrintPoint(){
    struct point somePoint = {5, 10};
    somePoint.x = 5;
    somePoint.y = 6;

    printPoint(somePoint);
    return -1;
}


// creating a struct
struct string {
    int length;
    char * data;
};

// create a function to print string struct
void printString(struct string str) {
    printf("length: %d, data: %s", str.length, str.data);
}

int pointersToStructs {
    struct string myName = {6, "Jordan"};
    struct string * pointerToString = &myName;
    printString(*pointerToString);
    pointerToString->data = "The best";
    pointerToString->length = 8;
    printString(*pointerToString);
    return 0;
}


struct date {
    int year;
    int month;
    int day;
};
#endif //LECTURE_CODE_LECTURE_8_STRUCTS_H
