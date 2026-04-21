#include <stdio.h>

void sort(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(*(arr + j) < *(arr + i)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
}

int main()
{
    int a[] = {0, 23, 14, 56, 12, 9};
    int n = 6;

    sort(a, n);

    return 0;
}
