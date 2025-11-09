/*
CMP_SC 1050
FS 2025
Lab 6
By Grayson Mueller (gmkb9)
October 3rd, 2025
*/
#include <stdio.h>

int count_digits(int n) {
    int number = n;
    int number_count = 0;

    if(n == 0) //Counts 0 as having one digit
        return 1;

    while(number != 0) { //Counts the digits in the number, disregarding the negative
        number /= 10;
        number_count++;
    }
    return number_count; //Returns the number of digits
}

int sum_digits(int n) {
    int counter = 0;
    int sum = 0;
    while(counter - 1 <= count_digits(n)) {
        sum += n % 10;
        n /= 10;
        counter++;
    }
    return sum;
}

int is_vowel(char c) {
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') { //Janky vowel detection
        return 1;
    } else {
        return 0;
    }
}



int main () {
    int user_number;
    char character;

    printf("Enter a number: ");
    scanf("%d", &user_number);

    printf("Number of digits: %d\n", count_digits(user_number));
    printf("Sum of digits: %d\n", sum_digits(user_number));

    printf("Enter a character: ");

    scanf(" %c", &character);
    printf("%s\n", is_vowel(character) ? "That's a vowel!" : "That's not a vowel :(");
}
