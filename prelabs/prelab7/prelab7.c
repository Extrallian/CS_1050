#include <stdio.h>
#include "prelab7.h"

int main() {
    int purchace_amount = 0;
    char y_or_n;
    int multiplier;

    printf("Enter purchase amount in cents: ");
    scanf("%d", &purchace_amount);
    record_purchace(purchace_amount);
    printf("Points earned: %d\n", compute_points(purchace_amount));
    printf("Total points: %d\n", get_total_points());

    printf("Enter purchase amount in cents: ");
    scanf(" %d", &purchace_amount);
    record_purchace(purchace_amount);
    printf("Points earned: %d\n", compute_points(purchace_amount));
    printf("Total points: %d\n", get_total_points());

    printf("Redeem 10 points for a free drink? ");
    scanf(" %c", &y_or_n);
    if(y_or_n == 'y')
        if(redeem_reward(10)) {
            printf("Rewards Redeemed! Remaining points: %d\n", get_total_points());
        } else {
            printf("Not enough points! Total points: %d\n", get_total_points());
    
        }
    
    printf("Bonus day! Multipler = ");
    scanf(" %d", &multiplier);
    bonus_points_day(multiplier);
    printf("Total points: %d\n", get_total_points());

}