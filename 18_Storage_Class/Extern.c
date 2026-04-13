#include <stdio.h>
#include "temp.c"

int fun(int a, int b) {
    // extern int sum;
    // sum = a + b;
    return sum;
}
// int sum = 12;

int main()
{
    int sum = fun(3, 5);
    printf("\nThe Sun is %d\n", sum);

    return 0;
}
