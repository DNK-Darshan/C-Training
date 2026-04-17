#include <stdio.h>

struct abc
{
    int p, q, r;
};

struct abc fun1() {
    struct abc s;
    printf("Enter Values : ");
    scanf("%d %d %d", &s.p, &s.q, &s.r);
    return s;
}

void fun2(struct abc s) {
    printf("Values : %d, %d, %d", s.p, s.q, s.r);
}

int main()
{
    struct abc s1 = fun1();

    // fun1(s1);
    // fun2(fun1());
    fun2(s1);

    return 0;
}
