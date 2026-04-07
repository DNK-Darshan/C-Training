
/*

- Size of multidimentional array can be calculated by multiplying the size of all the dimension.

Size of a[10][20] = 10 X 20 = 200
= 200 X 4 = 800 bytes

Size of a[4][10][20] = 4 X 10 X 20 = 800
= 800 X 4 = 3200 bytes

- Print 2D array we should use nested for loop in to the code.

- We should use three nested for loops to print the 3D array.

*/

#include <stdio.h>

int main()
{
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
    }

    printf("\n");

    int b[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf(" %d", b[i][j][k]);
            }
            
        }
    }
    

    return 0;
}

