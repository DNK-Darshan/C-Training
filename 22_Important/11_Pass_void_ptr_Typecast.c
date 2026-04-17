#include <stdio.h>

void printValue(void *ptr, char type) {
    if(type == 'i') {
        printf("\nInteger: %d", *(int *)ptr);
    } else if(type == 'f') {
        printf("\nFloat: %.2f", *(float *)ptr);
    }
}

int main()
{
    int a = 10;
    float b = 3.5;

    printValue(&a, 'i');
    printValue(&b, 'f');

    return 0;
}
