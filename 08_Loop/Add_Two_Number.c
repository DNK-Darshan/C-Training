#include <stdio.h>

int main()
{
    int x, y;
    printf("\nEnter x: ");
    scanf("%d", &x);
    printf("\nEnter y: ");
    scanf("%d", &y);

    while(y != 0) {
        x++;
        y--;
    }

    printf("Sum Of Two Value is: %d", x);

    return 0;
}
