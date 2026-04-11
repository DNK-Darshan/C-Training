#include <stdio.h>

int main()
{
    FILE *fptr;
    // fptr = fopen("NewFile.txt", "r");

    // if(fptr == NULL) {
    //     printf("\nFile doesn't Exist");
    // } else {
    //     fclose(fptr);
    // }

    fptr = fopen("NewFile.txt", "w");

    if(fptr == NULL) {
        printf("\nFile doesn't Exist");
    } else {
        fclose(fptr);
    }

    return 0;
}
