#include <stdio.h>

int main()
{
    int a = (1, 2, 3);
    printf("%d", a);

    int var = (printf("\n%s\n", "HELLO"), 5);
    printf("\n%d", var);

    int demo, num;

    // This output is 50 because of the comma operator has a simple analogy which is do this, then this...but remember only last result.
    num = (var = 15, var+35);
    printf("\n%d", num);

    return 0;
}

/*

Comma Operator : 
    Comma Operator returns the rightmost operand in the expression and it simply evaluates the rest of the operands and finally reject them.

*/