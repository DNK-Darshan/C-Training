#include <stdio.h>

int main()
{
    // int a[] = {78, 89, 67, 78, 12, 23, 67, 89, 78};
    int a[] = {10, 0, 60, 50, 49, 30, 129, 45, 23, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int max, second_large;

    max = a[0];

    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    second_large = a[0];

    for(int i = 0; i < n; i++) {
        if(a[i] < max && a[i] > second_large) {
            second_large = a[i];
        }
    }

    for(int i = 0; i < n; i++) {
        printf("A[%d]: %d\n", i, a[i]);
    }
    printf("\nThe Largest Number is %d\n", max);
    printf("The Second Largest Number is %d\n", second_large);

    return 0;
}
