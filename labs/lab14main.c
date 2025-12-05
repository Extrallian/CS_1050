#include "lab14.h"

int main() {
    struct Reading *arr = createReadings(10);
    struct Reading *p = arr;
    struct Reading *end = arr + 10;

    while(p < end) {
        printf("%d ", p->id);
        printf("%d\n", p->status);
        p++;
    }
}