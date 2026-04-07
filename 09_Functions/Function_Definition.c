#include <stdio.h>

int add(int, int);

int main()
{
    int m = 20, n = 30, sum;
    sum = add(m, n);
    printf("\nSum: %d", sum);
    return 0;
}

int add(int a, int b) {
    return (a + b);
}

/*

sum = add(m, n) :
    Actual Parameters

int add(int a, int b) :
    Formal Parameters

*/