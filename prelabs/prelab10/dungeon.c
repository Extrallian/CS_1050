#include "dungeon.h"

void generate_dungeon(char *dungeon, int rows, int cols) {
    
    for(int i = 0; i < (rows * cols); i++) {
        int roll = rand() % 10;
        *(dungeon + i) = (roll < 3) ? '#' : '.';
    }


    while(1) {
        int S_coor = rand() % (rows * cols);
        if(*(dungeon + S_coor) == '.') {
            *(dungeon + S_coor) = 'S';
            break;
        } 
    }

    while(1) {
        int E_coor = rand() % (rows * cols);
        if(*(dungeon + E_coor) == '.') {
            *(dungeon + E_coor) = 'E';
            break;
        } 
    }

}

void print_dungeon(const char *dungeon, int rows, int cols) {
    printf("\t");
    for(int line = 0; line < cols; line++)
        printf("%d ", line % 10);
    printf("\n0\t");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%c ", *(dungeon + (j + cols * i)));
        }
        (i < rows - 1) ? printf("\n%d\t", i + 1) : printf("\n");
    }
//      printf("ROWS=%d COLS=%d\n", rows, cols);

//     // Column ticks every 10, split across two lines to avoid long headers
//     printf("     ");
//     for (int c = 0; c < cols; c++) putchar((c % 10 == 0) ? '|' : ((c % 5 == 0) ? '+' : ' '));
//     putchar('\n');

//     printf("     ");
//     for (int c = 0; c < cols; c++) {
//         if (c % 10 == 0) putchar('0' + (c/10)%10);
//         else putchar(' ');
//     }
//     putchar('\n');

//     for (int r = 0; r < rows; r++) {
//         printf("%3d [", r);                // left sentinel
//         for (int c = 0; c < cols; c++) {
//             putchar(*(dungeon + r*cols + c));   // EXACTLY 1 char per cell
//         }
//         printf("] count=%d\n", cols);      // right sentinel + explicit count
//     }
}

void count_elements(const char *dungeon, int rows, int cols,
                    int *wall_count, int *path_count,
                    int *start_count, int *exit_count) {
    for(int i = 0; i < (rows * cols); i++) {
        char type = *(dungeon + i);
        switch(type) {
            case '#':
                (*wall_count)++;
                break;
            case '.':
                (*path_count)++;
                break;
            case 'S':
                (*start_count)++;
                break;
            case 'E':
                (*exit_count)++;
                break;
        } 
    }
}

void find_first_path(const char *dungeon, int rows, int cols) {
    for(int i = 0; i < (rows * cols); i++) {
        if(*(dungeon + i) == '.') {
            printf("First path is at: (%d, %d)\n", (i / rows), (i % cols));
            break;
        }
    }
}

void move_player(char *dungeon, int rows, int cols) {


    // Clear once and position cursor at start
    printf("\033[2J\033[H");

    int pos;
    for(int i = 0; i < (rows * cols); i++) {
        if(*(dungeon + i) == 'S') {
            pos = i;
            break;
        }
    }
    char ch;
    while(1) {
        printf("\033[H");      
        print_dungeon(dungeon, rows, cols);
        puts("Controls: w(up) a(left) s(down) d(right), q to quit.");
        scanf(" %c", &ch);

        if (ch == 'q' || ch == 'Q'){
            puts("6 - 7");
            break;
        }
        
        int r = pos / cols;
        int c = pos % cols;
        int nr = r, nc = c;


        switch(ch) {
            case 'w': case 'W':
                nr = r - 1;
                break;
            case 's': case 'S':
                nr = r + 1;
                break;
            case 'a': case 'A':
                nc = c - 1;
                break;
            case 'd': case 'D':
                nc = c + 1;
                break;
            default:
                continue;
        }
        int new_pos = nr * cols + nc;

        if(nr < 0 || nr >= rows || nc < 0 || nc >= cols)
            continue;

        if(*(dungeon + new_pos) == '.') {
            *(dungeon + (pos)) = '.';
            *(dungeon + new_pos) = 'S';
            pos = new_pos;
        }
        else if(*(dungeon + new_pos) == 'E'){
            puts("you flipping win bro.");
            break;
        }

    }
}