#include <stdio.h>

// Total size is 8 bytes
typedef union
{
    int a; // 4 bytes
    char b; // 1 bytes
    double c; // 8 bytes
} data;

int main()
{
    data a[10]; // 8 X 10 = 80 bytes
    a[0].a = 14;
    a[1].b = "S";
    a[2].c = 14.11;
    return 0;
}

/*

If we using a structure instead of union so each elements occures the seperate byte and total structure size is 13 bytes so the array size is 13 X 10 = 130 bytes so it is wested of the memory so in this case we must used the union instead of structure.

*/