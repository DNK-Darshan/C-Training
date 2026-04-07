#include <stdio.h>

int main()
{
    int a, b, result, i, n;

    a = 0;
    b = 1;

    printf("\nEnter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf(" %d", a);
        result = a + b;
        a = b;
        b = result;
    }
    return 0;
}
