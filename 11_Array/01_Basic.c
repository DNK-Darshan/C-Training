#include <stdio.h>

int main()
{
    int a[5], i;

    for(i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        printf("\nA[%d]: %d", i, a[i]);
        printf("\t");
    }
    printf("\n");
    return 0;
}
