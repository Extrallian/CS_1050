/*
CMP_SC 1050
FS 2025
Lab 14
By Grayson Mueller (gmkb9)
December 5th, 2025
*/
#include "lab14.h"

struct Reading *createReadings(int count) {
    if(count <= 0) return NULL; // If there is a count of zero or less, fail

    struct Reading *arr = malloc(sizeof(struct Reading) * count);
    if(arr == NULL) return NULL; // If allocation fails, return NULL

    struct Reading *p = arr;
    const struct Reading *end = arr + count;

    while(p < end) {
        p->id = 0;             // Initializes to sensible values
        p->value = 0.0;
        p->status = STATUS_OK;
        p++;
    }
    return arr;
}

void initReading(struct Reading *r, int id, double value, enum Status status) {
    if(r == NULL) return;

    r->id = id;         // Initializes all of the values to the provided values
    r->value = value;
    r->status = status;
}

int countByStatus(const struct Reading *readings, int count, enum Status status) {
    if(readings == NULL || count <= 0) return 0;

    const struct Reading *p = readings;             // Create separate pointer for the array
    const struct Reading *end = readings + count;

    int totalStatus = 0;

    while(p < end) { 
        if(p->status == status) {
            totalStatus++;          // Increments the total when the status matches
        }
        p++;
    }

    return totalStatus;
}

void freeReadings(struct Reading *readings) {
    if(readings == NULL) return;
    free(readings); // Free the memory from the malloc array
}

struct Reading *filterByStatus(const struct Reading *readings, int count, enum Status status, int *outCount) {
    return NULL; // Not honors, return NULL instead
}