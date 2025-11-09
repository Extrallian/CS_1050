/*
CMP_SC 1050
FS 2025
Lab 4
By Grayson Mueller (gmkb9)
September 19th, 2025
*/
#include <stdio.h>
int main(){


    int i;
    int fragment_one = 0;

    //Chapter 1 Code

    printf("Chapter 1:  The Code of Loops\n");
    for (i = 1; i <= 100; i++) {
        if (i % 5 != 0 && i % 2 != 0) {
            fragment_one += i;
        }
    }
    printf("Mystical Code Fragment 1: %d\n", fragment_one);


    int try = 1;
    char answer;
    int riddle;
    int fragment_two;
    //Chapter 2 Code

    printf("Chapter 2: Riddle of the Switch\n");

    do {
        printf("You get 3 tries. Pick a riddle (1, 2, 3, 4, or 5): ");
        scanf("%d", &riddle);

        switch(riddle) {
            case 1:         //Riddle one is chosen
                printf("Riddle 1: I have keys but can’t open locks. What am I?\n");
                printf( "a: A map\n"
                        "b: A treasure chest\n"
                        "c: A piano\n"); //correct answer
                
                printf("Enter your answer in lower case: ");
                scanf(" %c", &answer);
                (answer == 'c') ? (fragment_two = 42) : (fragment_two = 0);
                break;

            case 2:         //Riddle 2 is chosen
                printf("Riddle 2: I have hands but can’t clap. What am I?\n");
                printf(" a: A clock\n" //correct answer
                        "b: A robot\n"
                        "c: A tree\n");

                printf("Enter your answer in lower case: ");
                scanf(" %c", &answer);
                (answer == 'a') ? (fragment_two = 42) : (fragment_two = 0);
                break;
            
            case 3:         //Riddle 3 is chosen
                printf("Riddle 3: The more you take, the more you leave behind. What am I?\n");
                printf(" a: Footsteps\n" //correct answer
                        "b: Time\n"
                        "c: Money\n");
                
                printf("Enter your answer in lower case: ");
                scanf(" %c", &answer);
                (answer == 'a') ? (fragment_two = 42) : (fragment_two = 0);
                break;

            case 4:         //Riddle 4 is chosen
                printf("Riddle 1: I speak without a mouth and hear without ears. What am I?\n");
                printf(" a: A telephone\n"
                        "b: An echo\n" //correct answer
                        "c: a radio\n");

                printf("Enter your answer in lower case: ");
                scanf(" %c", &answer);
                (answer == 'b') ? (fragment_two = 42) : (fragment_two = 0);
                break;

            case 5:         //Riddle 5 is chosen
                printf("Riddle 1: I go up but never come down. What am I?\n");
                printf(" a: A ballon\n"
                        "b: Your age\n" //correct answer
                        "c: The sun\n");

                printf("Enter your answer in lower case: ");
                scanf(" %c", &answer);
                (answer == 'b') ? (fragment_two = 42) : (fragment_two = 0);
                break;

            default:  //A riddle is not chosen
                    printf("You didn't pick a riddle!\n");
                    fragment_two = 0;
                    try--;  //Makes sure the tries don't increase if a riddle is not picked
            
        }
        (fragment_two == 42) ? (try = 4) : (try++);
        printf("%s\n", (fragment_two == 42) ? "Correct!" : "Wrong!");
        printf("Mystical Code Fragment 2: %d\n", fragment_two);

    } while(try <= 3);
   


    int fragment_three;
    //Chapter 3
    printf("Chapter 3: The Final Challenge\n");

    fragment_three = fragment_one + fragment_two;

    printf("The Kingdom of Code is %s!\n", (fragment_three == 2042) ? "Saved" : "DOOMED");

}