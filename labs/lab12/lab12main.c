#include "lab12.h"

int main () {
    // typedef struct Animal a;
    struct Animal animals[MAX_ANIMALS] = {
        {"Scuba", 10, "Bronx"},
        {"Tuba", 2, "Scronx"},
        {"Blueba", 88, "Manhattan"}
    };
    struct Animal newAnimal = {"Johnny", 12, "Brazil"};
    int count = 3;
    addAnimal(animals, &count, newAnimal);
    // sortAnimalsByAge(animals, count);

    for (const struct Animal *d = animals; d < animals + count; d++) {
        printf("%s is %d\n", d->name, d->age);
    }



    return 0;
}