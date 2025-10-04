#include <stdio.h>


int isPrime(int number) {
    int i = 2;

    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            return 0;
            break;
        } 
    }

    if(number == 1)
        return 0;
    if(number == 2) 
        return 1;
    
    return 1;
}

int goldbachPrimePairs(int n) {
    int found = 0;
    
    if(n % 2 != 0)
        return 0;

    for(int i = 2; i <= n/2; i++){
        int j = n - i;
        if(isPrime(i) && isPrime(j)) {
            printf("(%d, %d)\n", i, j);
            found = 1;
        }
    }



    return found;
}

int main() {
   
    int integer;

    for(int i = 1; i <= 100; i++) {
        if(isPrime(i) == 1)
            printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Enter an natural even integer: ");
    scanf("%d", &integer);
    
    
    if(goldbachPrimePairs(integer) != 1) {
        printf("No pairs found!\n");
    }
}

