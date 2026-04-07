#include <stdio.h>

int main()
{
    int n, t, result = 0, r;

    printf("\nEnter n: ");
    scanf("%d", &n);
    t = n;

    while (n != 0)
    {
        r = n % 10;
        result = result * 10 + r;
        n = n / 10;
    }

    if(result == t) {
        printf("\nThis Number is palindron %d", result);
    } else {
        printf("\nThis is not palindron");
    }

    return 0;
}
