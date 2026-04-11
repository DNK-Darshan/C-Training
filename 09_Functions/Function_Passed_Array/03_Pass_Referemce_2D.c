#include <stdio.h>

void twoDia(int (*a)[3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("A[%d][%d]: %d\n", i, j, a[i][j]);
            a[i][j]++;
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3] = {
        {10, 23, 56},
        {78, 45, 90},
        {74, 34, 12}
    };

    twoDia(arr);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("A[%d][%d]: %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
