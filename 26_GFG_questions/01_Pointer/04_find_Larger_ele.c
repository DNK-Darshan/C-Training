#include <stdio.h>
#include <stdlib.h>

void findLargest(int *arr, int N) {
    for(int i = 1; i < N; i++) {
        if(*arr < *(arr + i)) {
            *arr = *(arr + i);
        }
    }

    printf("\nThe Largest Element is %d\n", *arr);
}

int main()
{
    int N = 4, *arr;

    arr = (int *) calloc (N, sizeof(int));

    *(arr + 0) = 12;
    *(arr + 1) = 90;
    *(arr + 2) = 67;
    *(arr + 3) = 620;

    findLargest(arr, N);

    return 0;
}
