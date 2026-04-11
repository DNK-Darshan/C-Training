#include <stdio.h>

void print2D(int (*a)[3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            // printf("A[%d][%d] = %d\n", i, j, a[i][j]);
            a[i][j]++; // Incrementing the value to show that changes are reflected in the original array
        }
        printf("\n");
    }
}

int main(void) {
    int arr[][3] = {
        {10, 23, 56},
        {78, 45, 90},
        {74, 34, 12},
        {11, 22, 33}
    };

    int rows = sizeof arr / sizeof arr[0];

    print2D(arr, rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d] = %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
