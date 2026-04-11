#include <stdio.h>

int main()
{
    FILE *fptr, *fptr2;
    fptr = fopen("Text.txt", "r");
    fptr2 = fopen("NewFile.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("\nCharacter: %c", ch);
    printf("\nAddress: %u", fptr);
    printf("\nPosition: %ld", ftell(fptr));
    
    printf("\n");
    
    fscanf(fptr, "%c", &ch);
    printf("\nCharacter: %c", ch);
    printf("\nAddress: %u", fptr);
    printf("\nPosition: %ld", ftell(fptr));
    
    printf("\n");
    
    fscanf(fptr, "%c", &ch);
    printf("\nCharacter: %c", ch);
    printf("\nAddress: %u", fptr);
    printf("\nPosition: %ld", ftell(fptr));

    printf("\n");

    fscanf(fptr, "%c", &ch);
    printf("\nCharacter: %c", ch);
    printf("\nAddress: %u", fptr);
    printf("\nPosition: %ld", ftell(fptr));

    printf("\n");
    
    fscanf(fptr, "%c", &ch);
    printf("\nCharacter: %c", ch);
    printf("\nAddress: %u", fptr);
    printf("\nPosition: %ld", ftell(fptr));
    
    printf("\n");


    
    int x;

    fscanf(fptr2, "%d", &x);
    printf("\nCharacter: %d", x);
    printf("\nAddress: %u", fptr2);
    printf("\nPosition: %ld", ftell(fptr2));

    printf("\n");

    fscanf(fptr2, "%d", &x);
    printf("\nCharacter: %d", x);
    printf("\nAddress: %u", fptr2);
    printf("\nPosition: %ld", ftell(fptr2));

    printf("\n");

    fscanf(fptr2, "%d", &x);
    printf("\nCharacter: %d", x);
    printf("\nAddress: %u", fptr2);
    printf("\nPosition: %ld", ftell(fptr2));

    return 0;
}
