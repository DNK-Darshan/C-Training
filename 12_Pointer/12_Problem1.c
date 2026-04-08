#include <stdio.h>

int main()
{
    int a[][3] = {1, 2, 3, 4, 5, 6};
    int (*p)[3] = a;
    printf("%d %d", (*p)[1], (*p)[2]);
    ++p;
    printf(" %d %d", (*p)[1], (*p)[2]);
    return 0;
}
