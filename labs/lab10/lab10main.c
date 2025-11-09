#include "lab10.h"

int main() {
    int map[SIZE][SIZE];
    int x = 0;
    int y = 0;

    initializeMap(map);
    
    displayMap(map, x, y);
 
    return 0;
}