#include "prelab14.h"

int *makeMultiplesOfTen(int n) {
    if(n <= 0){
        return NULL;
    }

    int *multiples = malloc(sizeof(int) * n);
    if(multiples == NULL) return NULL;

    int *p = multiples;
    for(int i = 0; i < n; i++) {
        *p = 10 * (i + 1);
        p++;
    }

    // for(int i = 0; i < n; i++) {
    //     printf("arr[%d] == %d, ", i, multiples[i]);
    // }

    return multiples;
}

void initBook(struct BookRecord *b, int id, int daysBorrowed, enum BorrowStatus status) {
    if(b == NULL) return;

    b->id = id;
    b->daysBorrowed = daysBorrowed;
    b->status = status;
}

struct BookRecord *allocateBooks(int count) {
    if(count <= 0) return NULL;

    struct BookRecord *books = malloc(sizeof(BookRecord) * count); // Allocate the amount of books in memory
    if(books == NULL) return NULL;

    BookRecord *p = books;          // Create pointers for the loop
    BookRecord *end = books + count;

    while(p < end) {
        p->id = 0;
        p->daysBorrowed = 0;
        p->status = AVAILABLE;

        p++; //increment pointer
    }

    return books;
}

int totalDaysBorrowed(const struct BookRecord *books, int count) {
    if(books == NULL || count <= 0) return 0;

    const BookRecord *p = books;
    const BookRecord *end = books + count;
    
    int totalDays = 0;

    while(p < end) {
        totalDays += p->daysBorrowed;
        p++;
    }
    
    return totalDays;
}

int countByBorrowStatus(const BookRecord *books, int count, enum BorrowStatus status) {
    if(books == NULL || count <= 0) return 0;

    const BookRecord *p = books;
    const BookRecord *end = books + count;

    int totalStatus = 0;

    while(p < end) {
        if(p->status == status) {
            totalStatus++;
        }
        p++;
    }

    return totalStatus;
}

struct BookRecord *extractByStatus(const struct BookRecord *books, int count, enum BorrowStatus status, int *outCount) {
    if(books == NULL || outCount == NULL || count <= 0) {
        if(outCount != NULL) *outCount = 0;
        return NULL;
    }

    const BookRecord *p = books;
    const BookRecord *end = books + count;

    int num_of_records = 0;

    while(p < end) { //First pass
        if(p->status == status) {
            num_of_records++;
        }
        p++;
    }
    p = books; //Reset pointer

    if(num_of_records == 0){ //If there are no matching records, return NULL
        *outCount = 0;
        return NULL;
    }


    BookRecord *matching_records = malloc(sizeof(BookRecord) * num_of_records);
    BookRecord *matchingPtr = matching_records;
    while(p < end) {
        if(p->status == status) {
            matchingPtr->id = p->id;
            matchingPtr->daysBorrowed = p->daysBorrowed;
            matchingPtr->status = p->status;
            matchingPtr++;
        }
        p++;
    }
    *outCount = num_of_records;
}