#include <stdio.h>
#include <stdlib.h>

int* fun() {
    int a, b, sum;
    a = 34;
    b = 54;
    sum = a + b;
    return &sum;
}

int main()
{
    // Why Dangling Pointer created
    // Case 1: De allocation of memory block
    int *ptr = (int *) malloc(7 * sizeof(int));
    ptr[0] = 12;
    ptr[1] = 34;
    ptr[2] = 45;
    ptr[3] = 2;

    printf("\nAddress of PTR: %p\n", ptr);

    free(ptr);

    printf("\nAddress of PTR: %p\n", ptr);

    // Case 2: Funtion Returning local variable address
    int *ptr2 = fun();
    printf("\nValue of PTR2: %d\n", *ptr2);

    // Case 3: If a variable goes out of scope
    int *ptr3;
    {
        int a = 89;
        ptr3 = &a;
        printf("\nValue of PTR3: %d\n", *ptr3);
    }

    printf("\nValue of PTR3: %d\n", *ptr3);

    return 0;
}
