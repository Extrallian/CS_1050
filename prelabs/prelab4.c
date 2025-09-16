/*
CMP_SC 1050
FS 2025
Prelab 4
By Grayson Mueller (gmkb9)
September 15th, 2025
*/
#include <stdio.h>

int main () { 




    printf("Challenge 1:\n"); // Begin challenge 1: for 10 terms, each term is the previous multiplied by 3

    int chlg_num1 = 1;
    int chlg_stor = 1;
    

    for(int i = 1; i <= 10; i++) {
        printf("%d: %d\n", i, chlg_num1);
        
        chlg_num1 = chlg_stor * 3;
        chlg_stor = chlg_num1;
    }

    printf("Challenge 2:\n");

    int try = 1;
    int riddle;
    char answer;
    
    printf("Choose a riddle (1, 2, or maybe even 3): ");
    scanf("%d", &riddle);
    
   
        switch(riddle) {
            case 1:
                do {
                    printf("Riddle 1: blah blah blah pick answer:\n"
                        "| (a) answer 1 |\n"
                        "| (b) answer 2 |\n"
                        "| (c) answer 3 |\n");
                    scanf(" %c", &answer);
                    if(answer == 'c') {
                        printf("gj\n");
                        break;
                    } else printf("bad job\n");
                    try++;
                } while(try <= 3);
                break;


            case 2:
                do {
                    printf("Riddle 2: blah blah blah pick answer:\n"
                        "| (a) answer 1 |\n"
                        "| (b) answer 2 |\n"
                        "| (c) answer 3 |\n");
                    scanf(" %c", &answer);
                    if(answer == 'c') {
                        printf("gj\n");
                        break;
                    } else printf("bad job\n");
                    try++;
                    
                } while(try <= 3);
                break;
            default:
                printf("You didn't pick 1, 2, or even 3!\n");
        };
        
        int number;

        printf("Enter a number: ");
        scanf("%d", &number);

        printf("The final code is: %d", (number % 2 == 0) ? (number + 50) : (number - 25));
    

    return 0;
}
