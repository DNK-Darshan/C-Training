#include <stdio.h>

int main()
{
    char var = 'A';
    printf("%d", var);
    return 0;
}

// Size of character = 1 byte
// Signed character range: -128 to +127
// Unsigned character range: 0 to 255
// Negative value won't buy you any additional powers
// In traditional ASCII table, each character requires 7 bits
// In extended ASCII table, each character utilize all 8 bits