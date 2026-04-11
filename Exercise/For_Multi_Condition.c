#include <stdio.h>

int main()
{
    int i, j, k;
    i = j = k = 0;

    for(i, j, k; i > 0, j <= 10, k % 10 == 0; i++, j++, k++) {
        printf("\n%d", i);
        printf("\n%d", j);
        printf("\n%d\n", k);
    }

    return 0;
}
