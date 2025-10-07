#include "prelab7.h"

static int total_points(int op, int value) {
    static int point_total = 0;
    
    switch(op) {
        case 0:     //Return current total
            return point_total;
            break;
        case 1:     //Reset total
            point_total = 0;
            break;
        case 2:     //Add points to total
            point_total += value;
            break;
        case 3:     //Subtract points from total
            point_total -= value;
            break;
        case 4:     //Multiply total by points
            point_total *= value;
            break;
    }
    if(point_total < 0) point_total = 0; //saftey guard; cannot go less than zero points
    return point_total;
}

int reset_day(void) {
    total_points(1, 0); //Calls the static function to reset the day
    return 1;
}

int compute_points(int cents) {
    return cents / 100;
}

int record_purchace(int cents) {
    total_points(2, compute_points(cents));
    if(compute_points(cents) < 0)
        return -1;
    else 
        return 1;
}

int get_total_points(void) {
    return total_points(0, 0);
}

int redeem_reward(int points_needed) {
    if(points_needed <= total_points(0, 0)) {
        total_points(3, points_needed);
        return 1;
    } else return 0;
}

int bonus_points_day(int multiplier) {
    total_points(4, multiplier);
    return total_points(0, 0);
}