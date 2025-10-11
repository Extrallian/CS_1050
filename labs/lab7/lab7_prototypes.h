#include <stdio.h>

/* Returns how many mph over the limit (0 if at or under ) . */
int compute_over_speed ( int limit , int actual ) ;

/* Returns the fine in whole dollars using the tiered policy below .
*/
int compute_fine ( int over_speed ) ;

/* Adds fine_dollars via _ticket_store , increments count , returns
updated count . */
int add_ticket ( int fine_dollars ) ;

/* Returns the cumulative total of fines ( dollars ) issued so far (
via _ticket_store ) . */
int total_fines ( void ) ;

/* Returns the total number of tickets issued so far .
This function acts as a wrapper that uses _ticket_store (2 , 0) . */
int get_ticket_count ( void ) ;

/* Resets both the ticket count and total fines to zero .
This function acts as a wrapper that uses _ticket_store (3 , 0) . */
int reset_tickets_and_fines ( void ) ;

int check_license_suspension(void);