#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    /*
    // Swapping using pointers
    int *p1 = &a, *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    */

    /*
    // Swapping without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    */

    // Using bitwise XOR Operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
