#include <stdio.h>

int main()
{
    char s[50];

    sprintf(s, "This is number %d", 1411);

    printf("\nThe String is %s", s);

    return 0;
}

/*

Sprintf() : 
    - This function same as printf function but instead of printing the result it is store the result in string.

*/