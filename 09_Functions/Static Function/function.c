#include <stdio.h>

static int fun(int a, int b) {
    int c = a + b;
    return c;
}

int main()
{
    int c = fun(3, 2);
    printf("\n%d\n",c);
    return 0;
}
