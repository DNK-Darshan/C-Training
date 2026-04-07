#include <stdio.h>

int main()
{
    int x = 10;
    int* ptr;

    ptr = &x;
    *ptr = 14;
    printf("%d", *ptr);
    printf("\t%d", x);

    return 0;
}
