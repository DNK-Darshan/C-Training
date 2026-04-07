#include <stdio.h>

void minMax(int a[], int len, int *min, int *max) {
    *min = *max = a[0];
    for(int i = 1; i < len; i++) {
        if(a[i] > *max) {
            *max = a[i];
        }
        if(a[i] < *min) {
            *min = a[i];
        }
    }
}

int main()
{
    int a[] = {23, 5, 89, 45, 21, 41, 85, 9, 2, 76, 93, 49, 50, 3};
    int min, max, len;
    len = sizeof(a)/sizeof(a[0]);
    printf("%ld", len);

    minMax(a, len, &min, &max);
    printf("\n Minimum Value of the Array is %d and Maximum value of the is %d \n", min, max);

    return 0;
}
