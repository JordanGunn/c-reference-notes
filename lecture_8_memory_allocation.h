//
// Created by User on 3/5/2021.
//

#ifndef LECTURE_CODE_LECTURE_8_MEMORY_ALLOCATION_H
#define LECTURE_CODE_LECTURE_8_MEMORY_ALLOCATION_H

// so far we have seen local, global, and static variables
// Variables use an area of the computer's memory -->
//      > Allocation:     when a variable is given an area of memory
//      > Deallocation:   When a system reclaims the memory area from the variable
//      > Lifetime:       Deallocation time - Allocation time
// Most common memory related issue: using a deallocated variable

// Local variables are stored in the stack, stack is LIFO

// HEAP memory (also known as dynamic memory) is an alternative to stack memory
//      > programmer explicitly asks for a block of memory of a particular size
//      > The memory keeps being allocated until the time that the programmer explicitly deallocates it
//      > Much more flexible, but harder to manage


void DynamicMemoryAllocationNotes() {

    void * malloc(size_t size);
    // Functions returns void *: a generic pointer type, can be cast to another pointer type
    // Allocates a block of memory of <size> bytes
    // VERY IMPORTANT: returns NULL if the system is unable to allocate a block of memory
    // ALWAYS check the result of malloc() to make sure it is not NULL
    // malloc() allocates BYTES
    //      - if you want to store a string of size 20, you need malloc(21)
    //      - i.e. one extra byte for '\0'
    // EXAMPLE GIVEN: Array of 20 integers
    // we must explicitly pass in the amount of memory required for an INT
    //            (cast)  funcCall(numOfelements * sizeof(desiredDataType))
    int * array = (int *) malloc(20 * sizeof(int));

    // ---------------------------------------------------------------------

    void * calloc(size_t num_elements, size_t element_size);
    // Allocates a block of size: <num_elements> * <element_size>
    // Initializes every byte to 0.
    // Same as malloc, returns NULL if it fails

    // -------------------------------------------------------------------

    void * realloc(void * ptr, size_t new_size);
    // given a previously allocated block of memory that stats at ptr
    // change the size of the memory block to <new_size>
    // returns a pointer to the new resized block
    // creates a copy of the first block of memory, then prives pointer to new block
    // !!! whenever you call realloc, USE THE NEW POINTER, e.g. do not use <*ptr>

    // USE CASE FOR REALLOC
    // If you have a text file you are reading in which you do not know the size or end
    // of the file
    // You want to store all of the data in an array
    // Allocate heap memory of initial arbitrary size (e.g. 100 bytes)
    // When you think you might be running out of memory you can resize it to some bigger storage
    // using realloc()

    // ----------------------------------------------------------------------

    void free(void * pointer);
    // Deallocates the heap memory block
    // the pointer is a pointer to the memory block
    // always make sure dynamically allocated memory is deallocated at the appropriate time
    // memory leaks are one of the most difficult bugs to find
    // program runs fine until it sounds runs out of memory

    // -------------------------------------------------------------------
    // WHEN A FUNCTION RETURNS A POINTER TO A DYNAMIC MEMORY HEAP
    //

}

// ======================================================================

// LOCAL memory is automatic: it is allocated when a function is called and
// deallocated when a function exits

// memory allocation OWNERSHIP MODELS
// Caller ownership
//      caller creater dynamic memory. It passes a pointer to the functions.

// Callee allocates and returns
//      The caller allocates some block of memory and returns a pointer to it

// IN BOTH THE ABOVE CASES, the caller needs to deallocate the memory



#endif //LECTURE_CODE_LECTURE_8_MEMORY_ALLOCATION_H
