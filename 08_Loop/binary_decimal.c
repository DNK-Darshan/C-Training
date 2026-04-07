#include <stdio.h>

int main()
{
    int binary, decimal = 0, base = 1, rem, num;
    printf("\nEnter the Binary Number: ");
    scanf("%d", &binary);

    num = binary;
    while(binary != 0) {
        rem = binary % 10;
        decimal = decimal + rem*base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("\nDecimal number is %d", decimal);

    return 0;
}
