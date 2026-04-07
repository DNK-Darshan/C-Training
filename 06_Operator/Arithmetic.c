#include <stdio.h>

int main()
{
    int a, b;
    int x = 2, y = 3, z = 4, t = 5;
    printf("\nEnter Number A: ");
    scanf("%d", &a);
    printf("\nEnter Number B: ");
    scanf("%d", &b);

    printf("\nA + B: %d", a + b);
    printf("\nA - B: %d", a - b);
    printf("\nA * B: %d", a * b);
    printf("\nA / B: %d", a / b);

    printf("\nX * Y / Z: %d", x*y/z);
    printf("\nX + Y - Z: %d", x+y-z);
    printf("\nX + Y * T - Z %% X: %d", x+y*t-z%x);

    return 0;
}

/*

*, /, % - Has a higher Precedence and their associativity is left to right

+, - - Has a Lower Precedence and their associativity is left to right

*/
