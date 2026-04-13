#include <stdio.h>

int fun() {
    static int a;
    a++;
    printf("%d\n", a);
}

int main()
{
    fun();
    fun();
    fun();
    fun();
    return 0;
}
