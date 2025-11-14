#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct Animal {
        char name[30];
        int age;
        char origin[30];
} Animal;

int addAnimal(struct Animal *animals, int* count, const char* newName, int newAge, const char* newOrigin);
