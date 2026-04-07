#include <stdio.h>

int main()
{
    int seen[10];
    int n, rem;

    printf("Enter n: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        if(seen[rem] == 1)
            break;
        seen[rem] = 1;
        n = n / 10;
    }

    if(n > 0)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
