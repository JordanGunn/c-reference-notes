//
// Created by User on 1/29/2021.
//

#ifndef LECTURE_CODE_LECTURE_3_POINTERS_REVISITED_H
#define LECTURE_CODE_LECTURE_3_POINTERS_REVISITED_H

// // -------- some general lingo for recursion -------->

// // BASE CASE: We should easily know the answer for the base case
// // This is the smallest problem we can solve

// // RECURSIVE STEP: This is how we reduce the problem to a smaller problem.
// // Your problem should eventually get reduced to the base case

bool isSumOfArraysEqualTo(int elements[], int size, int sum) {
    for (int index = 0; index < size; index++) {
        sum -= elements[index];
    }
    return !sum;
}

bool isSumOfArraysEqualToRecursive(int elements[], int size, int sum) {

    if (size == 1) {
        return elements[0] == sum;
    }

    return isSumOfArraysEqualToRecursive(elements + 1, size - 1, sum - *elements);
}

//void reverseString(char *inputString, char *reverse) {
//
//    int lengthOfInputString;
//    int indexCount = 0;
//
//    while (inputString != \n)
//
//
//
//    for (char pChar = *inputString; pChar != '\0'; pChar++) {
//
//    }
//}
void determineBaseCase(int size, int * baseCase);
// PRACTICE PROBLEM 2
// // Write a recursive function isPalindrome
bool isPalindrome(int elements[], int size) {

    printf("element start: %d\telement end: %d\n", elements[0], elements[size - 1]);
    printf("size: %d\n", size);



    for (int i = 0; i < 5; ++i) {
        printf("%d ", elements[i]);


    }
    puts("");


//    int baseCase = 0;
//    int * pBaseCase = &baseCase;

//    printf("base case: %d\n", *pBaseCase);

    if (size < 2) {
        return true;
    }

    if (elements[0] != elements[size-1]) {
        return false;
    }

    return (elements[0] == elements[size-1]) && isPalindrome(elements + 1, size - 2);
}

//bool isPalindrome(int elements[], size_t size) {
//    if (size < 2) {
//        return true;
//    }
//
//    return elements[0] == elements[size - 1] && isPalindrome(elements + 1, size - 2);
//}

void determineBaseCase(int size, int * baseCase) {

    if (*baseCase == 0) {
        if (size % 2 == 0) {
            *baseCase += 2;
        } else {
            *baseCase += 1;
        }
    }
}


#endif //LECTURE_CODE_LECTURE_3_POINTERS_REVISITED_H
