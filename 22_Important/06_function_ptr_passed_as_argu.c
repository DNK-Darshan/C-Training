#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int calculate(int a, int b, int (* operation)(int, int)) {
    // printf("\nResult is %d", operation(12, 2));
    // printf("\nResult is %d", operation(a, b));
    int result = operation(a, b);
    return result;
}

int main()
{
    int result1 = calculate(10, 2, add);
    int result2 = calculate(10, 2, sub);

    printf("\nAddition: %d", result1);
    printf("\nSubstraction: %d", result2);

    return 0;
}
