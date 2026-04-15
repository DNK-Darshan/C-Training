#include <stdio.h>
#include <string.h>

/*
int main()
{
    char s[] = "Hello Good Morning";
    
    char *fun = strstr(s, "Good");
    
    if(fun != NULL) {
        printf("\nFound\n");
    } else {
        printf("\nNot Found\n");
    }
    
    return 0;
}
*/

int main() {
    char str[] = "Hello World";
    char sub[] = "World";

    char *result = strstr(str, sub);

    if(result != NULL) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
