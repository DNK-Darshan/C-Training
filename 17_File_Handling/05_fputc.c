#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "w");

    fputc('A', fptr);
    fputc('p', fptr);
    fputc('p', fptr);
    fputc('l', fptr);
    fputc('e', fptr);

    return 0;
}
