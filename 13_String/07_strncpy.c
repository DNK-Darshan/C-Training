#include <stdio.h>
#include <string.h>

int main()
{
    char str1[6] = "Hello";
    char str2[4];

    // If we used this function the function is not add the null character at the end and string required the null character at the end so this defines the unpredecteble output so we must add the null character at the end manully
    // strncpy(str2, str1, sizeof(str2));
    // printf("\n%s\n", str2);
    
    strncpy(str2, str1, sizeof(str2));
    str2[3] = '\0';
    printf("\n%s\n", str2);
    
    return 0;
}
