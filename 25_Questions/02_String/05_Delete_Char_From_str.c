#include <stdio.h>

void deleteChar(char *str, char ch) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if(str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main()
{
    char str[100];
    char ch;

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    printf("\nString is %s\n", str);

    printf("Enter Char You want to Delete: ");
    scanf(" %c", &ch);

    deleteChar(str, ch);

    printf("\nUpdated String is %s\n", str);

    return 0;
}
