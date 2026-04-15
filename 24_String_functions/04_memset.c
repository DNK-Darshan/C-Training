#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "Hello This is Testing";

    printf("\nBefore Memset: %s\n", str);

    // memset(str, '.', 25);
    memset(str + 7, '.', 8 * sizeof(char));

    printf("\nAfter Memset: %s\n", str);

    return 0;
}

/*

memset():
    - is used to fill a blcok of memory with a particular value.

*/