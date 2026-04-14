#include <stdio.h>

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
    /* Other method to declare the array
        fptr[0] = add;
        fptr[1] = sub;
        fptr[2] = mul;
    */

    int (*fptr[3])(int, int) = {add, sub, mul};

    printf("\nAddition: %d", fptr[0](12, 2));
    printf("\nSubtraction: %d", fptr[1](12, 2));
    printf("\nMultiplication: %d", fptr[2](12, 2));

    return 0;
}
