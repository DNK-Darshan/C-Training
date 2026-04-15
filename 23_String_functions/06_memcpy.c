#include <stdio.h>
#include <string.h>

int main()
{
    /* For string
    char str[] = "Hello";
    char str2[] = "";
    
    memcpy(str2, str, sizeof(str));
    
    printf("\n%s\n", str2);
    */

    int a = 10, b;

    // memcpy(&b, &a, sizeof(a));
    memcpy(&b, &a, sizeof(int));

    printf("\nB: %d\n", b);

    return 0;
}
