#include <stdio.h>

int sum;
int fun(int a, int b) {
    // auto int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int sum = fun(3, 5);
    printf("\nThe Sun is %d\n", sum);

    return 0;
}

/*

Declaration : Telling the compiler about the variable (No space reserved)
Definition : Declaration + Space Reservation

*/