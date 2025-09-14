#include <stdio.h>

int main() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("1");
    } else {
        printf("%s", num > 0 ? "2" : "3" );
    }

    return 0;
}