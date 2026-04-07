#include <stdio.h>

char func();

int main()
{
    char c = func();
    printf("\nCharacter is: %c\n", c);

    return 0;
}

char func() {
    return 'S';
}