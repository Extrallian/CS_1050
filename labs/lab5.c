/*
CMP_SC 1050
FS 2025
Lab 5
By Grayson Mueller (gmkb9)
September 26th, 2025
*/

#include <stdio.h>
#include <math.h> //Lets sqrt be used in the program

int main() {

    int choice;
    int i;

    //Variables for the circle
    float radius = 2;
    float pi = 3.14159;
    int number_of_circles;

    //Variables for the rectangle
    int l;
    int w;

    //Variables for the triangle
    int side_a;
    int side_b;
    int side_c;
    float s; //The s used in the Heron formula
    float A; //Area computed by the Heron formula

    //Variable for square
    float square_side;

    do {
        printf("Menus-Based Geometrical Calculator\n" //Prints the menu for the program
            "1. Area of a Circle\n"
            "2. Area of a Rectangle\n"
            "3. Area of a Triangle (Heron)\n"
            "4. Perimeter of a Square\n"
            "5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: //Area of Circles
                printf("Enter number of circles: ");
                scanf("%d", &number_of_circles);

                for(i = 2; i <= number_of_circles + 1; i++) {
                    printf("Radius #%d: %d\n", i-1, i);
                    printf("Area: %f\n", pi*radius*radius);
                    radius++; //Post-increment radius
                };
                break;
            case 2: //Area of a Rectangle
                printf("Enter length: ");
                scanf("%d", &l);
                printf("Enter width: ");
                scanf("%d", &w);

                printf("%d\n", l * w);
                break;
            case 3: //Area of Triangle using Heron Formula
                for (i = 0; i < 3; i++) {
                    printf("Enter side a: ");
                    scanf("%d", &side_a);

                    printf("Enter side b: ");
                    scanf("%d", &side_b);

                    printf("Enter side c: ");
                    scanf("%d", &side_c);

                    //Check eligibility for the Heron formula
                    if(side_c < side_a + side_b && side_a < side_b + side_c && side_b < side_a + side_b) {
                        printf("Triangle is valid!\n"); 
                        break;
                    } else {
                        printf("Triangle is not valid! Please enter different values.\n");
                    }
                }
                if (i != 3) {
                    s = (side_a + side_b + side_c)/2;
                    A = sqrt(s * (s - side_a) * (s - side_b) * (s - side_c));
                    printf("Area: %.2f\n", A);
                }
                break;
            case 4: //Perimeter of Square
                printf("Enter side length: ");
                scanf("%f", &square_side);

                printf("Perimeter: %f\n", 4 * square_side);
            case 5:
                break;
            default:
                printf("%d is not an option!\n", choice);
        }

    } while (choice != 5);
    return 0;
}