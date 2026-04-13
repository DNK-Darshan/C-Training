#include <stdio.h>

int main()
{
    int a = 90;
    int *ptr; // This is a Wild Pointer untill they poininting to the any perticullar location
    // If they nothing point to any location and user prints it's address or value so it is dangorous.

    printf("\nValue of Pointer %d", *ptr); // This is very dengorous

    return 0;
}
