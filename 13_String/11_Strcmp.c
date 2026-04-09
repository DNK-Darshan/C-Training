#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Hello";
    char b[] = "Hello";
    char c[] = "World";

    printf("%d\n", strcmp(a, b)); // 0
    printf("%d\n", strcmp(a, c)); // negative
    printf("%d\n", strcmp(c, a)); // positive

    return 0;
}

/*

This function compare the both first character ascii value and compare it if first variable first character is small then its print the negitive and if big so it prints positive

*/