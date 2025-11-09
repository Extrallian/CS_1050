#include "lab11.h"

int main() {
    int array[5] = {2,9,6,9,10};

    int x = localizedSearch(&array[0], &array[4], 11);
    printf("%d\n", x);
    printBackward(&array[4], 5);
    printf("REVERSED: ");
    printf("%d\n", reverseSearch(&array[0], 5, 2));
    return 0;
}