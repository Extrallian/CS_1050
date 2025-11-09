/*
CMP_SC 1050
FS 2025
Lab 8
By Grayson Mueller (gmkb9)
October 17th, 2025
*/
#include <stdio.h>
#define SIZE 49

int main() {
    int array[SIZE]; //create array with a certain number of values
    int i = 0;
    int even = 0;
    int sum_even = 0;
    int sum_odd = 0;
    int odd_amt = 0;
    int even_amt = 0;


    for(i = 0; i <= SIZE; i++) {
        array[i] = even;
        
        if(i % 2 == 0){
            sum_even += array[i];
            even_amt++;
        } else {
            sum_odd += array[i];
            odd_amt++;
        }
        
        even += 2;

        printf("array[%d]: %d\n", i, array[i]);
    }

    printf("Total of even: %d, average: %d\n", sum_even, sum_even/even_amt);
    printf("Total of odd: %d, average: %d\n", sum_odd, sum_odd/odd_amt);
    

}