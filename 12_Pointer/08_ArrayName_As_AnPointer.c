#include <stdio.h>

int main()
{
    int a[5];
    *a = 10;
    printf("%d %d %d", a[0], a[1], a[2]);

    *(a+1) = 20;
    printf("\n%d %d %d", a[0], a[1], a[2]);

    return 0;
}
