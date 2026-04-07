#include <stdio.h>

int func1() {
    printf("\nHello ");
}
int func2() {
    printf("\nThere");
}

int main()
{
    int a;
    a = func1() + func2();
    printf("\n%d\n", a);


    int i = 5, var;
    var = sizeof(i++);
    printf("%d %d", i, var);

    return 0;
}

/*
    If we do not write the any return value so the function returns the number of character which is they prints
*/
