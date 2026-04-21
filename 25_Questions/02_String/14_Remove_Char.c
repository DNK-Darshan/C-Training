#include <stdio.h>

void removeChar(char *str1, char *str2) {
    for(int i = 0; str1[i] != '\0'; i++) {
        for(int j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j]) {
                for(int k = i; str1[k] != '\0'; k++) {
                    str1[k] = str1[k + 1];
                }
                i--;
                break;
            }
        }
    }
}

int main()
{
    char str1[100] = "embedded"; 
    char str2[100] = "bde";

    removeChar(str1, str2);

    printf("Updated String: %s\n", str1);

    return 0;
}
