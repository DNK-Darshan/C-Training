#include <stdio.h>
#define N 5

int main()
{
    int a[N], *p;
    int i = 0;

    for(p = a; p <= a+N-1; p++, i++) {
        printf("\nEnterA[%d]: ", i);
        scanf("%d", p);
    }

    printf("\n\nPrint Elements in Reverse Order\n\n");

    for(p = a+N-1; p >= a; p--) {
        printf(" %d", *p);
    }

    return 0;
}