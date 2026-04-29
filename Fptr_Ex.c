#include <stdio.h>

struct abc {
    void (*fptr)(int (*func)(int, int), int a, int b);
};

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}

void display(int (*fun)(int, int), int a, int b) {
    printf("\nResult is %d", fun(a, b));
}

int main()
{
    // display(sum, 12, 2);
    // display(sub, 12, 2);
    // display(mul, 12, 2);
    // display(div, 12, 2);

    struct abc s1;
    s1.fptr = &display;
    s1.fptr(sum, 12, 2);
    s1.fptr(sub, 12, 2);
    s1.fptr(mul, 12, 2);
    s1.fptr(div, 12, 2);

    return 0;
}