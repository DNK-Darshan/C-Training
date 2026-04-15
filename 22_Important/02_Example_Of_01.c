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
    int n;
    int (*fptr[3])(int, int) = {add, sub, mul};

    printf("\nEnter Your Choice: \n 1. Add \n 2. Sub \n 3. Mul \n");
    scanf("%d", &n);

    printf("\nResult is %d \n", fptr[n - 1](12, 2));

    return 0;
}
