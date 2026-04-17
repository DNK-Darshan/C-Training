#include <stdio.h>

int main()
{
    int a[100] = {10, 78, 67, 56, 89}, n, pos, ele;
    n = 5;

    printf("\nEnter Position You Want to Insert: ");
    scanf("%d", &pos);

    printf("\nEnter Element You Want to Insert: ");
    scanf("%d", &ele);

    for(int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = ele;
    n++;
    
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
