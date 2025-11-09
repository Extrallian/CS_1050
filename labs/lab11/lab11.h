#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#ifdef HONORS
int findAllIndices(const int *basePtr, size_t size, int key, int *outIndices, size_t maxOut);
#endif
int localizedSearch(const int *startPtr, const int *endPtr, int key);
void printBackward(const int *lastPtr, size_t count);
int reverseSearch(const int *basePtr, size_t size, int key);
