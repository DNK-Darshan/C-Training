#include <stdio.h>

void fun1() {
    printf("\nHello this is for Testing");
}

int main()
{
    // Declare function Pointer
    void (*funptr)();

    // Assign function Address
    funptr = fun1;

    // Call function using pointer
    funptr();

    return 0;
}
