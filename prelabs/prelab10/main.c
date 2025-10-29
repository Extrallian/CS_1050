#include "dungeon.h"

int main() {
    int walls = 0;
    int paths = 0;
    int starts = 0;
    int exits = 0;

    srand(time(NULL)); // Initialize random seed

    char dungeon[ROW][COL];

    generate_dungeon(&dungeon[0][0], ROW, COL);

    print_dungeon(&dungeon[0][0], ROW, COL);

    count_elements(&dungeon[0][0], ROW, COL, &walls, &paths, &starts, &exits);

    printf("Walls: %d\n"
        "Paths: %d\n"
        "Starts: %d\n"
        "Exits: %d\n", 
        walls, paths, starts, exits);

    find_first_path(&dungeon[0][0], ROW, COL);

    move_player(&dungeon[0][0], ROW, COL);
}