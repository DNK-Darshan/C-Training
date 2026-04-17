#include <stdio.h>

int main()
{
    int n = 6;
    int a[] = {2, 3, 4, 5, 6, 7};
    int i, j, temp;
    
    for (i = 0; i < n/2; i++)
    {
        j = n - 1 - i;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    
    printf("Reversed array: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
