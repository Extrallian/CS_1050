#include "lab14.h"
#include "string.h"

int main() {
    struct Reading *arr = createReadings(10);
    struct Reading *p = arr;
    struct Reading *end = arr + 10;

    const char* status_array[] = {"OK", "WARNING", "ERROR"};
    
    initReading(arr + 4, 104, 28.4, STATUS_ERROR);

    while(p < end) {
        printf("Reading %d: ", p - arr);
        printf("id=%d ", p->id);
        printf("value=%.1f ", p->value);
        printf("status=%s\n", status_array[p->status]);
        p++;
    }

   printf("Number of Errors: %d\n", countByStatus(arr, 10, STATUS_ERROR));

   freeReadings(arr);
}