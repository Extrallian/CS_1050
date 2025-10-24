#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Symbolic constants
#define NUM_SEQUENCES 5
#define SEQUENCE_LENGTH 10
#define RELATIONSHIP_THRESHOLD 0.7

// Function prototypes
void initializeSequences(char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH]);
void displaySequences(char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH]);
float calculateSimilarity(char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH], int index1, int index2);
int areRelated(float similarity);
void mutateSequence(char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH], int index, int mutations);