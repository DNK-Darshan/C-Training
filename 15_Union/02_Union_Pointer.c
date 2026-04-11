#include <stdio.h>

union abc
{
    int a;
    char b;
} var;

int main()
{
    var.a = 90;
    union abc *p = &var;

    printf("\nA = %d \tB = %c\n", p->a, p->b);

    return 0;
}

/*

We can access the pointer union variable using the -> 

*/
