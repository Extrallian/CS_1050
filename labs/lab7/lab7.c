/*
CMP_SC 1050
FS 2025
Lab 7
By Grayson Mueller (gmkb9)
October 10th, 2025
*/


#include <stdio.h>


/* Goes to the top of lab7 . c file .
Internal storage helper : implement and use this in your solution . */
static int _ticket_store ( int op , int amount ) ;
/* op codes :
0 -> get / return total fines ;
1 -> add fine & increment ticket count , return ticket count ;
2 -> get / return ticket count ;
3 -> reset total fines and total tickets to 0 , return 1.
Returns -1 on invalid op or invalid amount for op 1. */

static int _ticket_store(int op, int amount) { 
    static int fines_total = 0;
    static int tickets_issued = 0;
    switch(op) {
        case 0:     //Return total fines
            return fines_total;

        case 1:     //Add fine and increase amount of tickets
            fines_total += amount;
            return ++tickets_issued;

        case 2:     //Return the amount of tickets
            return tickets_issued;

        case 3:     //Reset fines and tickets
            fines_total = 0;
            tickets_issued = 0;
            return 1;

        default:    //Invalid operator; return -1
            return -1;    
    }  
}


int compute_over_speed(int limit, int actual) {
    if(limit < 0 || actual < 0)
        return -1;

    int over_speed = actual - limit;
    if(over_speed >= 0)
        return over_speed;
    else 
        return 0;
}

int compute_fine(int over_speed) {
    if(over_speed < 0) //If overspeed is negative, error out
        return -1; 

    int fine = 0;

    if (over_speed < 0) //Return -1 if amount is invalid
        return -1;
    else if(over_speed == 0)    //o = 0, no fine
        fine = 0;
    else if(over_speed >= 1 && over_speed <= 10)    // 1 <= o >= 10
        fine = 50 + (5 * over_speed);
    else if(over_speed >= 11 && over_speed <= 20)   // 11<= o >= 20
        fine = 100 + (10 * (over_speed - 10));
    else if(over_speed >= 21)                   // o >= 21
        fine = 200 + (15 * (over_speed - 20));

    
    return fine;
}

int add_ticket (int fine_dollars) {
    if(fine_dollars < 0) //If negative, error out
        return -1;
    else 
        return _ticket_store(1, fine_dollars);
}

int total_fines(void) {
    return _ticket_store(0, 0); //Return total number of fines
}

int get_ticket_count(void) {
    return _ticket_store(2, 0); //Return total number of tickets
}

int reset_tickets_and_fines(void) {
    return _ticket_store(3, 0); //Reset both tickets and fines
}

int check_license_suspension(void) {
    return 0;
}