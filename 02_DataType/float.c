#include <stdio.h>

int main()
{
    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;

    printf("Size of Float: %d", sizeof(float));
    printf("\nSize of double: %d", sizeof(double));
    printf("\nSize of Long double: %d", sizeof(long double));

    printf("\n%.16f", var1);
    printf("\n%f", var2);
    printf("\n%Lf", var3);
    return 0;
}

// Float is represent the fractional value print upto 7 digit from starting
// Double is represent the fractional value print upto 16 digit from starting
// long Double is represent the fractional value print upto 19 digit from starting