//
// Created by User on 1/18/2021.
//

#ifndef LECTURE_CODE_LECTURE_2_ARRAYS_AND_POINTERS_H
#define LECTURE_CODE_LECTURE_2_ARRAYS_AND_POINTERS_H

// ----- ARRAYS AND POINTERS ----- //

// example of array function
void makeAllElementsZero(int elements[], int size) {
    for (int index = 0; index < size; index++) {
        elements[index] = 0;
    }
}

// arrays passed to functions do not need pointers
// value of an array type DECAYS to a value of a pointer type (in function calls)
// we are getting a pointer to the first element of the array

//// more examples
//void functionWithArrayParameter(int elements[], int size) {
//    // sizeof function gets the size of element in bytes
//    printf("SizeOf array????: %lu\n", sizeof(elements));
//    for (int index = 0; index < size; index++) {
//        printf("%d ", elements[index]);
//    }
//    printf("\n");
//}
//
//void functionWithArrayPointerParameter(int *elements, int size) {
//    printf("SizeOf array pointer????: %lu\n", sizeof(elements));
//    for (int index = 0; index < size; index++) {
//        printf("%d ", elements[index]);
//    }
//    printf("\n");
//}





//}



#endif //LECTURE_CODE_LECTURE_2_ARRAYS_AND_POINTERS_H
