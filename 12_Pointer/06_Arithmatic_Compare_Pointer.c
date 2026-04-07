#include <stdio.h>

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6};
//     int *p = &a[3];
//     int *q = &a[5];

//     printf("%d", p <= q);
//     printf(" %d", p >= q);

//     q = &a[3];
//     printf(" %d", p == q);

//     return 0;
// }

int main() {
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[1];
    int *q = &a[5];

    printf("%d", *(p + 3));
    printf(" %d", *(q - 3));
    printf(" %d", q - p);
    printf(" %d", p < q);
    printf(" %d", *p < *q);

    return 0;
}
