#include <stdio.h>
#include <malloc.h>

typedef enum BorrowStatus {
    AVAILABLE,
    CHECKED_OUT,
    OVERDUE
} BorrowStatus;

typedef struct BookRecord {
    int id;
    int daysBorrowed;
    enum BorrowStatus status;
} BookRecord;

int *makeMultiplesOfTen(int n);

void initBook(BookRecord *b, int id, int daysBorrowed, BorrowStatus status);

struct BookRecord *allocateBooks(int count);

int totalDaysBorrowed(const struct BookRecord *books, int count);

int countByBorrowStatus(const BookRecord *books, int count, enum BorrowStatus status);

struct BookRecord *extractByStatus(const struct BookRecord *books, int count, enum BorrowStatus status, int *outCount);