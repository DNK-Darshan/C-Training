#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    // If we not assign it using NULL so it is take a garbage address
    int *p = NULL;

    printf("\nPrint Value Of A: %d", a);
    printf("\nPrint Address Of A: %p", &a);
    printf("\nPrint Value Of PTR: %p", ptr);
    printf("\nPrint Address Of A: %p", &ptr);
    printf("\nPrint Value Of A Using Pointer: %d", *ptr);

    if(p == NULL) {
        printf("\nP is a NULL Pointer");
    }
    else {
        printf("\nPrint Value Of P: %d", *p);
    }

    return 0;
}
