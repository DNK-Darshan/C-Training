#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");

    char ch;
    ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    return 0;
}

/*

EOF is stand for End Of File

*/
