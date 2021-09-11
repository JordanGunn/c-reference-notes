#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define INITIAL_SIZE 5

struct date {
    int day;
    int month;
    int year;
};

int flattenDate(struct date date);
bool isDateLater(struct date date1, struct date date2);

int main() {

    struct date date1 = {25, 2, 1992};
    struct date date2 = {9, 11, 2000};

    isDateLater(date1, date2);

    return 0;
}

// STRUCT PRACTICE
// Create a structure that represents a date
// 1. Write a function that takes two dates and returns true if
//    the first date is after the second date
// 2. Assume every month has 30 days. Write a function that takes two
//    dates and prints how far they are from each other

bool isDateLater(struct date date1, struct date date2) {
    printf("flat date 1: %d, flat date 2: %d", flattenDate(date1), flattenDate(date2));
    return flattenDate(date1) > flattenDate(date2);
}

int flattenDate(struct date date) {

    int flatYear = date.year * 10000;
    int flatMonth = date.month * 100;
    int flatDay = date.day;

    return flatYear + flatMonth + flatDay;
}



// DYNAMIC MEMORY ALLOCATION PRACTICE
// ==========================================
int *resizeArrayIfNeeded(int * array, int usedLength, int * arraySize) {
    if (usedLength <= *arraySize) {
        return array;
    }
    printf("Oops, need to resize!\n");
    *arraySize *= 2;
    return (int *) realloc(array, *arraySize * sizeof(int));
}

void requestNumberAndResize() {
    int length = 0, currentNumber = 0;
    int size = INITIAL_SIZE;                            // initial size for allocated heap memory
    int * array = (int *) malloc(size * sizeof(int));
    scanf("%d", &currentNumber);                        // assign value of input to current number
    while (currentNumber > 0) {
        length++;
        array = resizeArrayIfNeeded(array, length, &size);
        array[length - 1] = currentNumber;
        scanf("%d", &currentNumber);                    // update value of current number
    }
    for (int i = 0; i < length; i++) {
        printf("A[%d] = %d\n", i, array[i]);
    }
    free(array);

}