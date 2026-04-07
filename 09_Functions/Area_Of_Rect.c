#include <stdio.h>

int areaOfRect(int length, int width) {
    int c;
    c = length * width;
    return c;
}

int main()
{
    int l = 10, b = 5;
    int area = areaOfRect(l, b);
    printf("\nArea Of Rectangle is: %d\n", area);

    l = 10, b = 20;
    int a = areaOfRect(l, b);
    printf("\nArea Of Rectangle is: %d\n", a);

    return 0;
}
