#include <stdio.h>

int countWord(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    // If we want input from the user so we must put the stdin into the last of the fgets function
    fgets(str, sizeof(str), stdin);

    int word = countWord(str);
    printf("Number of words: %d\n", word);

    return 0;
}
