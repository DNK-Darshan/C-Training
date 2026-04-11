#include <stdio.h>
#pragma pack(1) 

struct abc
{
    char a;
    int c;
    char b;
} var;


int main()
{
    printf("\nSize of structure abc is %d", sizeof(var));
    return 0;
}

// Pragma directive tells the compiler to pack the structure members with 1-byte alignment, eliminating padding.
// #pragma is used to give the extra instruction to the compiler.
// If compiler not understand it so it is ignored it. 