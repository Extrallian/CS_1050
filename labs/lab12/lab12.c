#include "lab12.h"

int addAnimal(struct Animal animals[], int *count, struct Animal newAnimal) {
    if(*count >= MAX_ANIMALS || *count < 0) return 0; // If animal array is full, end and return 0

    struct Animal *p = animals + *count; // defines a pointer to the animal

    // Inputs values for the new animal
    strcpy(p->name, newAnimal.name);
    p->age = newAnimal.age;
    strcpy(p->origin, newAnimal.origin);

    // increments count
    (*count)++;

    // when successful, return 1
    return 1;
}

void printAnimalsByOrigin(const struct Animal *animals, int count, const char *origin) {
    for (const struct Animal *d = animals; d < animals + count; d++) { // loops through every animal
        if(strcmp(d->origin, origin) == 0) { // prints only animals with the same origin
            printf("%s\n", d->name);
        }
    }
}

void sortAnimalsByAge(struct Animal animals[], int count) {
    for(int pass = 1; pass < count; pass++) { // number of times to loop the sorting function
        for(int i = 0; i < count - 1; i++) { // loops through the struct for each animal
            if(animals[i].age > animals[i + 1].age){

                // swaps values if first animal is older
                struct Animal hold = animals[i];
                animals[i] = animals[i + 1];
                animals[i + 1] = hold;
            }
        }
    }
}
