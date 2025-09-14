/*
CMP_SC 1050
FS 2025
Lab 2
By Grayson Mueller (gmkb9)
September 5th, 2025
*/
#include<stdio.h>

int main(){

    //initialize variable 1 and 2
    int var1;
    int var2;

    printf("Please enter variable 1:\n");
    scanf("%d", &var1);

    printf("Please enter variable 2:\n");
    scanf("%d", &var2);

    printf("You selected %d and %d\n", var1, var2);

    //Product of var1 and var2
    printf("Product: %d\n", var1 * var2);

    //var1 divided by var2 
    printf("Quotient: %d\n", var1 / var2);

    //(var2 - 2) * var1
    printf("(Y-2)*X: %d\n",  (var2 - 2) * var1);

    //Print original variables
    printf("Original variables were: %d and %d\n", var1, var2);

    
    return 0;
}