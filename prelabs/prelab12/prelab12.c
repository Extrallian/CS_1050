#include "prelab12.h"

int addAnimal(struct Animal *animals, int* count, const char* newName, int newAge, const char* newOrigin) {
    if(*count >= MAX){
        return -1;
    }    

    struct Animal *p = animals + *count;

    strcpy(p->name, newName);
    p->age = newAge;
    strcpy(p->origin, newOrigin);

    (*count)++;
    return 0;
}