#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.6;

    void *ptr;

    ptr = &a;
    printf("\nValue Of A: %d", *(int *)ptr);

    ptr = &b;
    printf("\nValue Of B: %.2f\n", *(float *)ptr);

    return 0;
}
