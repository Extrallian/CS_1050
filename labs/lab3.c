/*
CMP_SC 1050
FS 2025
Lab 3
By Grayson Mueller (gmkb9)
September 12th, 2025
*/
#include <stdio.h>


int main( void ) {

    for(int i = 2; i < 302; i += 2) {
        if (i % 3 == 0 && i % 5 == 0) {  // Check if the integer is divisible by both 3 and 5
            printf("TrumanTiger%d", i);
        } 
        else if(i % 3 == 0) { // Check if the integer is divisible by 3
            printf("Tiger%d", i);
        }
        else if(i % 5 == 0) { // Check if the integer is divisible by 5
            printf("Truman%d", i);
        }
        else { // If neither, print the integer
            printf("%d", i);
        }

        printf("%s", (i < 300) ? ", " : "\n"); // Print a comma unless it is the last term

    };


    return 0;
}