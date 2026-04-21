#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int start = 0, end, len;
    len = strlen(str);
    end = len - 1;

    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    printf("\nReverse String is %s\n", str);

    return 0;
}
