#include "genetics.h"
#include <stdlib.h>
#include <time.h>

void initializeSequences(char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH]) {
    char genetic[4] = {'A','T','C','G'};
    for(int i = 0; i < NUM_SEQUENCES; i++) {
        for(int j = 0; j < SEQUENCE_LENGTH; j++) {
            int x = rand() % 4;
            sequences[i][j] = genetic[x];
        }
    }
}

void displaySequences(char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH]) {
    for(int row = 0; row < NUM_SEQUENCES; row++) { // Print the genetic sequences
        for(int column = 0; column < SEQUENCE_LENGTH; column++) {
            printf("%c", sequences[row][column]);
            
            if (column < SEQUENCE_LENGTH - 1) { // Print a space between sequences
                printf(" ");
            }
        }
        printf("\n");
    }
}

float calculateSimilarity(char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH], int index1, int index2) {
    float total_sim = 0;
    if(index1 < 0 || index1 >= NUM_SEQUENCES || index2 < 0 || index2 >= NUM_SEQUENCES)
        return -1;
    
    for(int j = 0; j < SEQUENCE_LENGTH; j++) {
        if(sequences[index1][j] == sequences[index2][j])
            total_sim++;
    }

    return total_sim / (float)SEQUENCE_LENGTH;
}

int areRelated(float similarity){
    if(similarity >= RELATIONSHIP_THRESHOLD) {
        return 1;
    } else return 0;
}

void mutateSequence(char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH], int index, int mutations) {
    char genetic[4] = {'A','T','C','G'};

    if(index < 0 || index >= NUM_SEQUENCES)
        return;

    for(int i = 0; i < mutations; i++) {
        int rand_pos = rand() % SEQUENCE_LENGTH; 

        sequences[index][rand_pos] = genetic[rand() % 4];
    }
}
