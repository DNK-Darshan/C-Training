#include <stdio.h>

// Function returns the int pointer
/* This function returns the local variable address so it is destroy after function complation
int *fun() {
    int a = 10;
    return (&a);
}
*/

int *fun() {
    static int a = 10;
    return (&a);
}

int main()
{
    int *p;

    p = fun();

    printf("\nAddress: %p\n", p);
    printf("\nValue: %d\n", *p);

    return 0;
}
