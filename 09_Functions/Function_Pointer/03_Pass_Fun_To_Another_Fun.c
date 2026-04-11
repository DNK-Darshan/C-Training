#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int calculate(int (*operation)(int, int), int x, int y) {
    return operation(x, y);
}

int main()
{
    int r1 = calculate(add, 4, 6);
    int r2 = calculate(mul, 4, 6);

    printf("\nAddition: %d", r1);
    printf("\nMultiplication: %d\n", r2);

    return 0;
}
