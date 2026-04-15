#include <stdio.h>

typedef int (* operation)(int, int);

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

struct calculator
{
    operation add;
    operation sub;
};


int main()
{
    struct calculator cal;
    cal.add = add;
    cal.sub = sub;

    printf("\nAddition: %d", cal.add(12, 2));
    printf("\nSubtraction: %d", cal.sub(12, 2));

    return 0;
}
