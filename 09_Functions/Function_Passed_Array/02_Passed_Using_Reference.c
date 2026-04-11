#include <stdio.h>

int maxNum(int *a, int length) {
    int newArr[] = {10, 90, 50, 60, 80, 70};
    int i;
    
    for(i = 0; i < length; i++) {
        a[i] = newArr[i];
    }
    
    int max = *a;

    for(i = 0; i < length; i++) {
        // printf("A[%d]: %d\n", i, *a);
        if(*a > max)
            max = *a;
        a++;
    }
    return max;
}

int main()
{
    int a[] = {10, 34, 98, 45, 63};
    int length = sizeof(a) / sizeof(int);
    int max = maxNum(a, length);

    for(int i = 0; i < length; i++) {
        printf("A[%d]: %d\n", i, a[i]);
    }

    printf("\nMax Number is %d \n", max);

    return 0;
}
