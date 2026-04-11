#include <stdio.h>

union abc
{
    int a;
    char b;
} var;

union another
{
    int a;
    char b;
    double c;
    float d;
} other;


int main()
{
    // This is given the size is 8 bytes because of double take the 8 bytes of the memory.
    printf("\nThe size of the Union: %d\n", sizeof(other));
    var.a = 65;
    printf("A = %d \tB = %c\n", var.a, var.b);
    return 0;
}

/*

Union: 
    - Union is a user defined data type but unlike structures, union members share same memory location.
    - In union member will share same memory location. If we make changes in one member then it will be reflected to other member as well.
    - This example is upper.
    - Size of the union is taken according to the size of the largest member of the union.

*/
