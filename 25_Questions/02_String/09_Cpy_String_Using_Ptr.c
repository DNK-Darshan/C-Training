#include <stdio.h>

int copyString(char *source, char *destination) {
    int i = 0;
    while(source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return 0;
}

int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);

    copyString(str1, str2);

    printf("\nCopied string: %s\n", str2);

    return 0;
}
