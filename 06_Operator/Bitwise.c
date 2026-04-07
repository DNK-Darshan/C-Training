#include <stdio.h>

int main()
{
    int x = 1, y = -55;
    if(x && y) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    // E means Empty bit
    char var = 3; // 0000 0011
    // printf("\n%d\n", var<<1); // 0000 011E  final result is 0000 0110 because of last empty bits are filled with 0

    printf("\n%d\n", var >> 1); // E000 0001 final result is 0000 0001 because of first leading bit filled with 0

    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nA: %d \t B: %d\n", a, b);


    int v1 = 0x165; // 101100101
    int v2 = 0xFFF; // 111111111

    return 0;
}

/*

Bitwise & :
    - It takes two bits at a time and perform AND operation.
    - Result of AND is 1 when both bits are 1.
    - 7 - 0 1 1 1
    - 4 - 0 1 0 0
    ---------------
    - 4 - 0 1 0 0     7 & 4 = 4

Bitwise | :
    - It takes two bits at a time and perform OR operation.
    - Result of AND is 0 when both bits are 0.
    - 7 - 0 1 1 1
    - 4 - 0 1 0 0
    ---------------
    - 4 - 0 1 1 1     7 ! 4 = 7

Bitwise ~ :
    - Its job is to complement each bit one by one.
    - Result of NOT is 0 when bit is 1 and 1 when bit is 0.
    - 7 - 0 1 1 1
    ---------------
    - 8 - 1 0 0 0    ~7 = 8

==> Difference between logical && and bitwise & is logical operator checks the two condition when bitwise operator checks two bit at a time 

==> Left shifting is equivalent to multiplication by 2 Raise to right operand.
    var = 3
    var << 4 = 3 X 2 raised to 4 = 48

==> Right shifting is equivalent to division by 2 raise to right operand.
    var = 32
    var >> 4 = 32 / 2 raised to 4 = 2

Bitwise XOR(^) :
    - It takes two binary number and perform bitwise XOR operation
    - Result of XOR is 1 when two bits are different otherwise the result is 0
    - 7 - 0 1 1 1
    - 4 - 0 1 0 0
    ---------------
    - 3 - 0 0 1 1     7 ^ 4 = 3

*/