#include "genetics.h"

int main() {

    srand(time(NULL)); // Initialize random seed
    char sequences[NUM_SEQUENCES][SEQUENCE_LENGTH]; // Define array

    initializeSequences(sequences); // Initialize array with random sequences

    printf("Initial Genetic Sequences:\n");
    displaySequences(sequences);

    int sentinel = 0;
    int choice = 0;

    while(sentinel != -1) {
        printf("Choose an Operation:\n"
            "1. Calculate Similarity\n"
            "2. Determine Relationships\n"
            "3. Mutate Sequence\n"
            "4. Exit\n"
        );

        if (scanf("%d", &choice) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF); // clear bad input
            printf("Invalid input. Please enter a number between 1 and 4.\n");
            continue;
        }

        switch(choice) {
            case 1:{
                int index1 = 0;
                int index2 = 0;

                printf("Enter the indices of the two sequences being compared (0-%d): ", NUM_SEQUENCES - 1);
                if (scanf("%d %d", &index1, &index2) != 2) {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                    printf("Invalid input. Expected two integers.\n");
                    break;
                }

                if (index1 < 0 || index1 >= NUM_SEQUENCES || index2 < 0 || index2 >= NUM_SEQUENCES) {
                    printf("Index out of range. Valid indices are 0 to %d.\n", NUM_SEQUENCES - 1);
                    break;
                }

                float similarity = calculateSimilarity(sequences, index1, index2);
                if (similarity < 0.0f) {
                    printf("Error computing similarity (invalid indices).\n");
                } else {
                    printf("Similarity: %.2f\n", similarity);
                }
                break;
            }
            case 2:{
                int index1 = 0;
                int index2 = 0;

                printf("Enter the indices of the two sequences being compared (0-%d): ", NUM_SEQUENCES - 1);
                if (scanf("%d %d", &index1, &index2) != 2) {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                    printf("Invalid input. Expected two integers.\n");
                    break;
                }

                if (index1 < 0 || index1 >= NUM_SEQUENCES || index2 < 0 || index2 >= NUM_SEQUENCES) {
                    printf("Index out of range. Valid indices are 0 to %d.\n", NUM_SEQUENCES - 1);
                    break;
                }

                float similarity = calculateSimilarity(sequences, index1, index2);
                if (similarity < 0.0f) {
                    printf("Error computing similarity (invalid indices).\n");
                } else {
                    printf("Related: %d\n", areRelated(similarity));
                }
                break;
            }
            case 3:{
                int idx = 0;
                int mutations = 0;
                printf("Enter index of sequence to mutate (0-%d): ", NUM_SEQUENCES - 1);
                if (scanf("%d", &idx) != 1) {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                    printf("Invalid input. Expected an integer index.\n");
                    break;
                }

                if (idx < 0 || idx >= NUM_SEQUENCES) {
                    printf("Index out of range. Valid indices are 0 to %d.\n", NUM_SEQUENCES - 1);
                    break;
                }

                int c;
                while ((c = getchar()) != '\n' && c != EOF);

                printf("Enter number of mutations (0-%d): ", SEQUENCE_LENGTH);
                if (scanf("%d", &mutations) != 1) {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                    printf("Invalid input. Expected an integer.\n");
                    break;
                }

                if (mutations < 0) {
                    printf("Number of mutations must be non-negative.\n");
                    break;
                }

                mutateSequence(sequences, idx, mutations);
                break;
            }
            case 4:
                sentinel = -1;
                break;
            default:
                printf("Invalid choice, please try again.\n");
                break;
        }

        if(sentinel != -1) {
            printf("Updated Genetic Sequences:\n");
            displaySequences(sequences);
        }
    }
    return 0;
}