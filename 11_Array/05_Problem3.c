#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    printf("Size Of Whole Array: %d", sizeof(a));
    printf("\nSize Of One Element Of Array: %d", sizeof(a[0]));
    printf("\nTotal Element Of Array: %d", sizeof(a)/sizeof(a[0]));

    return 0;
}
