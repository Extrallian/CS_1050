#include "lab7_prototypes.h"

int main() {
    int limit = 0;
    int actual = 0;

    while(limit != -1 || actual != -1) {

        printf("Enter speed limit and actual speed: ");
        scanf("%d %d", &limit, &actual);

        int over = compute_over_speed(limit, actual);

        int fine = compute_fine(over);
        if(fine >= 0) 
            add_ticket(fine);
    }

    printf("%d\n", total_fines());
}