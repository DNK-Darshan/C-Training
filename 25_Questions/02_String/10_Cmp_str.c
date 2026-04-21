#include <stdio.h>

int comparestring(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] == str2[i]) {
            return 0; // Strings are equal
        } else if(str1[i] > str2[i]) {
            return 1; // str1 is greater than str2
        } else {
            return -1; // str1 is less than str2
        }
        i++;
    }
    return 0; // Strings are equal
}

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("\nstr1: %s", str1);
    printf("str2: %s\n", str2);

    int result = comparestring(str1, str2);
    printf("Result: %d\n", result);

    return 0;
}
