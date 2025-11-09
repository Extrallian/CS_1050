#include <stdio.h>
#include "lab9.h"
#define SIZE 5

void initializeImage(int image[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            image[i][j] = 0;
       }
    }
}

void flipPixel(int image[SIZE][SIZE], int row, int col) {
    if(image[row][col] == 0) { // flips the coordinate between 0 and 1
        image[row][col] = 1;
    } else if(image[row][col] == 1){ 
        image[row][col] = 0;
    }
}

int drawPixel(int image[SIZE][SIZE], int row, int col) {
    if(row < 0 || row >= 5 || col < 0 || col >= 5)
        return 0;
    
    if(image[row][col] == 0){
        flipPixel(image, row, col);
    }
    return 1;
}

void invertImage(int image[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            flipPixel(image, i, j);
       }
    }
}

int flipRow(int image[SIZE][SIZE], int row) {
    if(row < 0 || row >= 5)
        return 0;

    for(int j = 0; j < SIZE; j++) {
        flipPixel(image, row, j);
    }
    return 1;
}

int flipColumn(int image[SIZE][SIZE], int col) {
    if(col < 0 || col >= 5)
        return 0;

    for(int i = 0; i < SIZE; i++) {
        flipPixel(image, i, col);
    }

    return 1;
}

void clearImage(int image[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            image[i][j] = 0;
       }
    }
}

void displayImage(int image[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%d ", image[i][j]);
       }
    printf("\n");
    }
}



