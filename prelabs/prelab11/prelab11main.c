#include "prelab11.h"
#define START 0
#define END 5

int main() {
    int array[6] = {2,4,6,8,10,12};
    
    printf("Distance: %d\n", distance_between(&array[START], &array[END]));
    printf("Sum of [%d, %d]: %d\n", START, END, range_sum(&array[START], &array[END]));

    printf("Reverse: "), print_subarray_reverse(&array[START], &array[END]);

    printf("Average: %.2f\n", average_array(array, 6));

    int min;
    int max;
    
    find_min_max(&array[END], &array[START], &min, &max);

    printf("Min: %d, Max: %d\n", min, max);
}