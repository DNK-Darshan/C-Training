#include <stdio.h>

void strong_number(int ) {
    int n, q, rem, fact = 1, result = 0;

    printf("\nEnter n: ");
    scanf("%d", &n);
    q = n;

    while (q != 0)
    {
        rem = q % 10;
        for(int i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }

    if(result == n) {
        printf("%d is strong Number", n);
    } else {
        printf("%d is not a strong Number", n);
    }
}

int main()
{
    int a[] = {10, 90, 60, 50, 49, 30, 145, 45, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < n; i++) {
        for(int j = 1; j < a[i] / 2; j++) {
            
        }
    }

    return 0;
}
