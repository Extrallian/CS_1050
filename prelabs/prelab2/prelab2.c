#include <stdio.h>

int main() {

    int A = 1;
    int B = 1;
    int C = 1;
    int D = 1;

    //Asks for the inputs, %d is an integer defined by the variables outside
    //the & says to move to the variable in memory
    printf("Enter four integers separated by spaces (i.e. 1 2 3 4):\n");
    scanf("%d %d %d %d", &A, &B, &C, &D);


    //These are the outputs that the prelab 2 was asking for
    printf("Integers picked: %d %d %d %d\n", A, B, C, D);
    printf("Sum of B and C: %d\n", B + C);
    printf("Product of A and D: %d\n", A * D);
    printf("Quotient of A and C: %d\n", A / C);
    printf("Remainder of C and D: %d\n", C % D);
    printf("(A*C)/(B+D): %d\n", (A*C)/(B+D));

    return 0;
}