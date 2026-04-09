#include <stdio.h>
#include <string.h>

int main()
{
    char p[20];
    char *s = "String";
    int length = strlen(s), i;
    // length = 6

    for(i = 0; i < length; i++)
        // i = 0 and s[6 - 0]
        p[i] = s[length - i];
    
    // Print last NULL character and last charachter means string is over so nothing print anything
    printf("%s", p);

    return 0;
}
