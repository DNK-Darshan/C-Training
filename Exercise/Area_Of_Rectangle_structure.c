#include <stdio.h>

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r1;
    r1.length = 10;
    r1.breadth = 5;

    printf("\nArea of Rectangle is: %d", r1.length * r1.breadth);
    return 0;
}
