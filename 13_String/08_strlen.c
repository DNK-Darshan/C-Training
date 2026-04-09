#include <stdio.h>
#include <string.h>

int main()
{
    char str2[100] = "Hello World";
    char str1[] = "Hello World";
    char *str = "Hello World";
    printf("%d %d %d", strlen(str), strlen(str1), strlen(str2));
    return 0;
}
