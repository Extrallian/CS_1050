#include "prelab11.h"

int distance_between(const int *startPtr, const int *endPtr) {
    return endPtr - startPtr; 
}

int range_sum (const int *startPtr, const int *endPtr) {
    int sum = 0;
   

    if(startPtr > endPtr) {
        const int *temp = startPtr;
        startPtr = endPtr;
        endPtr = temp;
    }

    const int *ptr = startPtr;
    while(ptr <= endPtr) {
        sum += *ptr++;
    }
    
    return sum;
}

void print_subarray_reverse (const int *startPtr, const int *endPtr) {
    const int *ptr = endPtr;
    while(ptr >= startPtr) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");
}

double average_array (const int *basePtr, int size) {
    double sum = 0;
    const int* thePtr = basePtr; 

    while(thePtr < basePtr + size) {
        sum += *thePtr++;
    }
    
    if(size != 0) return sum/size;
    else return 0;
}

void find_min_max (const int *startPtr, const int *endPtr, int *minOut, int *maxOut) {
    if (startPtr > endPtr) {
        const int *temp = startPtr;
        startPtr = endPtr;
        endPtr = temp;
    }

    int min = *startPtr;
    int max = *startPtr;    

    const int *ptr = startPtr;
    while(ptr <= endPtr) {
        if(min > *ptr)
            min = *ptr;

        if(max < *ptr)
            max = *ptr;

        ptr++;
    }
    *minOut = min;
    *maxOut = max;
}