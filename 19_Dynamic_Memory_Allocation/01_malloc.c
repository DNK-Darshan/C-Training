#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;

    printf("Enter the number of Array you Want: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Enter an integer: ");
        scanf("%d", &ptr[i]);
    }

    free(ptr);

    for(int i = 0; i < n; i++) {
        printf("A[%d]: %d\n", i, ptr[i]);
    }

    return 0;
}
