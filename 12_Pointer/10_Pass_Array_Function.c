#include <stdio.h>

int sum(int arr[], int len) {
    int total = 0;
    for(int i = 0; i < len; i++) {
        total += arr[i];
    }
    return total;
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int len = sizeof(a) / sizeof(a[0]);

    printf("Sum of array elements: %d\n", sum(a, len));

    return 0;
}
