#include <stdio.h>

int isPalindrom(char *str) {
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }
    printf("\nLength : %d\n", len);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        if(str[start] != str[end]){
            return 0;
        }
        start++;
        end--;
    }
    
    return 1;
}

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    if(isPalindrom(str))
        printf("\nString is Palindrom\n");
    else
        printf("\nString is not Palindrom\n");

    return 0;
}
