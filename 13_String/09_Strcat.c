#include <stdio.h>
#include <string.h>

int main()
{
    // char str1[100], str2[100];

    // This behaviour is undefine so we can write the another function for it.
    char str1[15], str2[100];

    strcpy(str1, "Hello ");
    strcpy(str2, "Good Morning ");
    strcat(str1, str2);

    printf("\n%s %d %d", str1, sizeof(str1), sizeof(str2));

    return 0;
}
