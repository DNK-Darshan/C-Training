#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Hello";
    char str2[10], str3[10];

    // printf("\n%s\n", strcpy(str2, str1));
    // printf("\n%s\n", str2);

    strcpy(str3, strcpy(str2, str1));
    printf("\n%s\n", str2);
    printf("\n%s\n", str3);

    return 0;
}
