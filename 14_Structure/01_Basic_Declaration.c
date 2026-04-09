#include <stdio.h>

struct car {
    char *name;
} car1, car2;

int main()
{
    car1.name = "Maruti Suzuki";
    car2.name = "Thar";

    printf("\n%s", car1.name);
    printf("\n%s", car2.name);

    return 0;
}
