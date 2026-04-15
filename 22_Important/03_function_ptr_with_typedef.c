#include <stdio.h>

typedef int (*fptr) (int, int);

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int main()
{
    fptr fp;

    fp = add;
    printf("\nAddition: %d", fp(12, 2));

    fp = sub;
    printf("\nSubtraction: %d", fp(12, 2));

    fp = mul;
    printf("\nMultiplication: %d", fp(12, 2));

    return 0;
}
