#include <stdio.h>

struct car
{
    int fualCap;
    int seatingCap;
    float cityMileage;
};


int main()
{
    struct car c[2];
    int i;

    for(i = 0; i < 2; i++) {
        printf("\nEnter the car %d Fual Capacity: ", i + 1);
        scanf("%d", &c[i].fualCap);
        printf("\nEnter the car %d Seating Capacity: ", i + 1);
        scanf("%d", &c[i].seatingCap);
        printf("\nEnter the car %d City Mileage: ", i + 1);
        scanf("%f", &c[i].cityMileage);
    }

    printf("\n");

    for(i = 0; i < 2; i++) {
        printf("\nCar %d Details: \n", i + 1);
        printf("Fual Tank Capacity: %d\n", c[i].fualCap);
        printf("Seating Capacity: %d\n", c[i].seatingCap);
        printf("City Mileage: %f\n", c[i].cityMileage);
    }

    return 0;
}
