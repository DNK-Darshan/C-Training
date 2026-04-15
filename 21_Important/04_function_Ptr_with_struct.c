#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

/*

struct calculator
{
    int (* Oprate)(int, int);
};


int main()
{
    struct calculator cal;
    
    cal.Oprate = add;
    printf("\nAddition: %d", cal.Oprate(12, 2));
    
    cal.Oprate = sub;
    printf("\nSubtraction: %d", cal.Oprate(12, 2));
    
    return 0;
}

*/

struct calculator
{
    int (* add)(int, int);
    int (* sub)(int, int);
};

int main()
{
    struct calculator cals = {add, sub};

    printf("\nAddition: %d", cals.add(12, 2));
    printf("\nSubtraction: %d", cals.sub(12, 2));

    return 0;
}
