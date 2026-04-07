#include <stdio.h>

int main()
{
    int a[9] = {34, 56, 54, 35, 57, 89, 90, 32, 21};

    for(int i = 0; i <= 8; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 8; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
