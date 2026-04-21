#include <stdio.h>

void removeSpace(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            for(int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeSpace(str);

    printf("\nUpdated string is %s", str);

    return 0;
}
