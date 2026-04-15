#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void greetHello(int (* fptr)(int, int)) {
    printf("\nThe sum Of two Operands is %d", fptr(10, 9));
}

int main()
{
    int (* ptr)(int, int);

    ptr = sum;

    printf("Result Is %d", ptr(12, 2));
    greetHello(ptr);

    return 0;
}
