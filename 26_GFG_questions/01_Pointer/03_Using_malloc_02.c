#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1[5][5] = {
        { 0, 1, 2, 3, 4 },
        { 2, 3, 4, 5, 6 },
        { 4, 5, 6, 7, 8 },
        { 5, 4, 3, 2, 6 },
        { 2, 5, 4, 3, 1 }
    };

    int ***a2 = malloc(5 * sizeof(int **));

    for(int i = 0; i < 5; i++) {
        a2[i] = malloc(5 * sizeof(int *));
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            a2[i][j] = &a1[i][j];
        }
    }

    printf("\nThe Values Are: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", *a2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
