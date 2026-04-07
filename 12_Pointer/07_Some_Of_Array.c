#include <stdio.h>

int main()
{
    int a[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;

    for(p = &a[0]; p <= &a[4]; p++) {
        sum += *p;
    }
    printf("Sum is %d\n", sum);
    
    sum = 0;

    for(p = a; p <= a+4; p++) {
        sum += *p;
    }
    printf("Sum is %d\n", sum);

    return 0;
}
