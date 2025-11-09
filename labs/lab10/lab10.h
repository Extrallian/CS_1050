#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
#define TREASURE_X 2
#define TREASURE_Y 3

void initializeMap(int map[SIZE][SIZE]);
void displayMap(int map[SIZE][SIZE], int x, int y);
int move(int *x, int *y, char direction);
int checkTreasure(int x, int y);
#ifdef HONORS
int leaveTrace(int map[SIZE][SIZE], int x, int y); // HONORS
#endif