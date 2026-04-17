#include <stdio.h>

int main()
{
    int a[] = {78, 89, 67, 78, 12, 23, 67, 89, 78};
    int n = sizeof(a) / sizeof(a[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("\nDuplicate elemets is %d\n", count);

    return 0;
}
