#include <stdio.h>
#include <string.h>

void printArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
}

int main()
{
    int n = 10;
    int a[n];

    a[0] = 1;
    a[1] = 1;
    a[2] = 1;
    a[3] = 1;
    a[4] = 1;
    a[5] = 1;
    a[6] = 1;
    a[7] = 1;
    a[8] = 1;
    a[9] = 1;

    printArray(a, n);

    // This function works on bytes by bytes not elements by elements 
    memset(a, 10, n * sizeof(a[0]));

    printf("\n");
    printArray(a, n);

    return 0;
}

/*

10 in decimal = 0x0A
Each int has 4 bytes 
0x0A 0x0A 0x0A 0x0A - 0x0A0A0A0A
In decimal 168430090

*/