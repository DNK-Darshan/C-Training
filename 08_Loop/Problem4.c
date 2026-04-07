#include <stdio.h>

int main()
{
    unsigned int i = 500;
    while (i++ != 0);
    printf("%d", i);
    printf("\nsizeOf : %ld", sizeof(i));
    return 0;
}
