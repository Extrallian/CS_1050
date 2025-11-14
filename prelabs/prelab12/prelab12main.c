#include "prelab12.h"

int main() {
    
    
    struct Animal a = {"Splash", 3, "Japan"};
    struct Animal *p = &a;
    
    printf("First age: %d\n", a.age);

    a.age = 4;
    printf("Dot age: %d\n", a.age);

    p->age = 5;
    printf("Arrow age: %d\n", p->age); 

    strcpy(a.origin, "Brazil");
    printf("%s\n", a.origin);

    struct Animal animals[MAX] = {
        {"Leo", 5, "Africa"},
        {"Polly", 2,"Australia"},
        {"Splash", 3, "Japan"},
        {"Slither", 4, "Brazil"},
        {"Nibbles", 1, "Canada"}
    };
    int count = 5;

    addAnimal(animals, &count, "Jackie", 12, "Dublin");
    
    for (const struct Animal *d = animals; d < animals + count; d++) {
        printf("%s\n", d->name);
    }
    printf("\n");
    for (const struct Animal *d = animals; d < animals + count; d++) {
        if(strcmp(d->origin, "Japan") == 0) {
            printf("%s\n", d->name);
        }
    }


    

}

