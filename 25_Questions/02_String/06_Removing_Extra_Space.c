#include <stdio.h>

void removeSpace(char *str) {
    int i = 0, j = 0;
    int spaceFound = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
            spaceFound = 0;
        } else {
            if (!spaceFound) {
                str[j] = ' ';
                j++;
                spaceFound = 1;
            }
        }
        i++;
    }

    str[j] = '\0';
}

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    removeSpace(str);

    printf("\nUpdated string is %s", str);

    return 0;
}
