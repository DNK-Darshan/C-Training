#include <stdio.h>
#define N 6

int main()
{
    int a[N] = {2, 3, 4, 5, 6, 7}, b;
    
    printf("\nEnter Position You Want to Delete: ");
    scanf("%d", &b);
    
    for(int i = b; i < N-1; i++) {
        a[i] = a[i+1];
    }
    a[N-1] = 0; 

    printf("Array after deletion:\n");
    for(int i = 0; i < N; i++) {
        printf("A[%d]: %d\n", i, a[i]);
    }

    return 0;
}
