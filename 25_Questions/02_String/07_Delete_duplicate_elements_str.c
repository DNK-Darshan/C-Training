#include <stdio.h>

void remove_duplicate(char *str) {
    int i, j, k;

    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; ) {
            if(str[i] == str[j]) {
                for(k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
            } else {
                j++;
            }
        }
    }
}

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    remove_duplicate(str);

    printf("\nUpdated string is %s", str);

    return 0;
}
