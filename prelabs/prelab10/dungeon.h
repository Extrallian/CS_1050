#pragma once // Only include this file once

// Include other header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Symbolic Constants
#define ROW 12
#define COL 24
#define WALL_PROB 2

// Task 1: Generate the dungeon
void generate_dungeon(char *dungeon, int rows, int cols);

// Task 2: Print the dungeon
void print_dungeon(const char *dungeon, int rows, int cols);

// Task 3: Count wall, path, start, and exit cells
void count_elements(const char *dungeon, int rows, int cols,
                    int *wall_count, int *path_count,
                    int *start_count, int *exit_count);

// Task 4: Find the first path cell and print its coordinates
void find_first_path(const char *dungeon, int rows, int cols);

// Task 5: Interactive player movement
void move_player(char *dungeon, int rows, int cols);
