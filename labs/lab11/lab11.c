#include "lab11.h"

int localizedSearch(const int *startPtr, const int *endPtr, int key){
    const int* ptr = startPtr;
    while(ptr < endPtr){ // allows the pointer to increment until the end of the array
        if(*ptr == key){
            return ptr - startPtr; // returns how much the pointer has been incremented
        }
        ptr++;
    }
    return -1;
}

void printBackward(const int *lastPtr, size_t count){
    const int* ptr = lastPtr;

    while(lastPtr - ptr < count) { // Gets the amount that the pointer has been decremented
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");
}

int reverseSearch(const int *basePtr, size_t size, int key) {
    const int* ptr = (basePtr + size - 1);
    if(size == 0)
        return -1; // if size is zero, error out

    while(ptr >= basePtr){ // Checks if the ptr has decremented below the first array value
        if(*ptr == key){
            return ptr - basePtr; // stores index of the last matched value in the array
        }
        ptr--;
    }

    return -1;
}

