#include <stdio.h>

int main() {
    int reverse = 0;
    int number = 121;
    while(number != 0) {
        int current_digit = number % 10;
        reverse = reverse * 10 + current_digit;

       number = number / 10;
    }
    printf("%d\n", reverse);
}