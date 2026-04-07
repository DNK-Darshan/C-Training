#include <stdio.h>

int func(int *ptr1, int *ptr2) {
    *ptr1 = 30;
    *ptr2 = 40;
}

int main()
{
    int a = 10, b = 20;
    func(&a, &b);
    printf("\nA: %d \t B: %d\n", a, b);
    return 0;
}

/*

Call by Reference :
    - Here both actual and formal parameters refers to same memory location. Therefore, any changes made to the formal parameters will get reflected to actual parameters.

*/