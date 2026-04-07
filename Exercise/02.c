#include <stdio.h>

#define STRING "\n%s"
#define VAL "Hello, How are you..!"

int main()
{
    // Using 0 it is now a octal number not a decimal number so it is calculation like 3 raise to 8 raise to 0, and 2 raise to 8 raise to 1 
    // 8 * 2 + 3 = 16
    int var = 023;
    printf("%d", var);

    // Now variable has a octal value and also print the octal value using %o so print at it is value
    int var1 = 045;
    printf("\n%o", var1);

    printf(STRING, VAL);

    return 0;
}
