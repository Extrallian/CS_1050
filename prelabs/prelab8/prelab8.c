#include <stdio.h>

int main () {
    int array[20];
    int sum = 0;
    int i = 0;

    for(i = 0; i < 20; i++) {
        array[i] = i + 1;
        printf("array[%d] = %d\n", i, array[i]);
        sum += array[i];
    }

    printf("Sum of total array: %d\n", sum);
    printf("Average: %.2f\n", (float)sum/i);
}