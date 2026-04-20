#include <stdio.h>

int count_vowel(char *str) {
    int count = 0;

    while (*str)
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    int vowels = count_vowel(str);
    printf("\nVowels in string is %d\n", vowels);

    return 0;
}
