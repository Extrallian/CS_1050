#include <stdio.h>

int main( void ) {

    for(int i = 1; i < 51; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {  // Check if the integer is divisible by both 3 and 5
            printf("Fizz Buzz");
        } 
        else if(i % 3 == 0) { // Check if the integer is divisible by 3
            printf("Fizz");
        }
        else if(i % 5 == 0) { // Check if the integer is divisible by 5
            printf("Buzz");
        }
        else { // If neither, print the integer
            printf("%d", i);
        }

        printf("%s", (i < 50) ? ", " : "\n"); // Print a comma unless it is the last term

    };


    return 0;
}