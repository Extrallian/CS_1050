#include "lab10.h"

void initializeMap(int map[SIZE][SIZE]) {
    for(int i = 0; i < (SIZE); i++) { 
        for(int j = 0; j < (SIZE); j++){
            map[i][j] = 0;
        }
    }
}

void displayMap(int map[SIZE][SIZE], int x, int y) {
    for(int i = 0; i < (SIZE); i++) { 
        for(int j = 0; j < (SIZE); j++){
            if(x == i && y == j) {
                printf("[P] ");
            } else printf("[%d] ", map[i][j]);
        }
    printf("\n");
    }
}

int move(int *x, int *y, char direction) {
    int up_down = 0;
    int left_right = 0;
    switch(direction) {
        case 'u': case 'U':
            up_down--;
            break;
        case 'd': case 'D':
            up_down++;
            break;
        case 'l': case 'L':
            left_right--;
            break;
        case 'r': case 'R':
            left_right++;
            break;
        default:
            return 0;
    }
    if(*x + up_down >= SIZE || *y + left_right >= SIZE || *x + up_down < 0 || *y + left_right < 0){
        return 0;
    } 

    *x += up_down;
    *y += left_right;

    return 1;
}

int checkTreasure(int x, int y) {
    if(x == TREASURE_X && y == TREASURE_Y)
        return 1;
    else
        return 0;
}