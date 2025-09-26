#include <stdio.h>

int main() {

    int choice;
    int number;

    int i; //counter variable

    int output = 0;

    do{ //Loops the menu until the user exits
        printf("Menu:\n 1. Find Factorial\n 2. Print Fibonacci Series\n 3. Sum of Natural Numbers\n 4. Number Properties\n 5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 5) { //Exits the program before the user has to put in a number
            return 0; 
        };
       

        printf("Enter a number: ");
        scanf(" %d", &number);

        switch(choice) {
            case 1: //Factorial of number
                output = 1;
                for(i = 1; i <= number; i++){
                    output *= i;
                };
                printf("Factorial of %d: %d\n", number, output);
                break;
            case 2: //Fibonacci Series
                int nstor;
                int n2 = 1;
                int n1 = 0;
                printf("Printing %d terms of the Fibonacci series: \n", number);

                for(i = 1; i <= number; i++) {
                    printf("%d%s", n1, (i != number) ? " " : "\n"); //Prints the number and a space/new line depending on if it is the final term
                    nstor = n2;
                    n2 += n1;
                    n1 = nstor;
                };
                break;
            case 3: //Sum of Natural Numbers
                for(i = 1; i <= number; i++) {
                    output += i;
                };
                printf("Sum of the the first %d numbers: %d\n", number, output);
                break;
            case 4: //Number Properties
                printf("%d is even AND greater than 10: %s\n", number, (number % 2 == 0 && number > 10) ? "True" : "False");
                printf("%d is divisible by 3 OR 5: %s\n", number, (number % 3 == 0 || number % 5 == 0) ? "True" : "False");
                printf("%d is NOT negative: %s\n", number, (number > 0) ? "True" : "False");
                break;
            case 5: //Exit (probably redundant)
                break;
            default:
                printf("You didn't enter an eligible choice!\n");    
        };
    } while(choice != 5);
    return 0;

}