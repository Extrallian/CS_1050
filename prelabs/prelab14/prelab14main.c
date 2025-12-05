#include "prelab14.h"

int main() {

    printf("\nreturned value:%d\n", makeMultiplesOfTen(2));
    BookRecord manifesto;
    initBook(&manifesto, 1029102, 10, CHECKED_OUT);
    BookRecord *library = allocateBooks(20);

    printf("%d", countByBorrowStatus(library, 20, CHECKED_OUT));
}