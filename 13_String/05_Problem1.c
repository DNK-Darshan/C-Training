#include <stdio.h>

int main()
{
    printf("%c", '\n'); // This printf accept the char so it is work peoper

    printf("%c", "\n"); // This printf accept the char but we pass into it string so it is not work proper

    putchar('\n'); // This is work proper because we pass the char into it

    putchar("\n"); // This is not work proper because we pass string into it

    puts('\n'); // This is not working because of we pass the char into it when this function need string as a argument

    puts("\n"); // This is working because of we passing the string into it

    printf("%s", '\n'); // This is not working because of we pass the char into it when this function need string

    printf("%s", "\n"); // // This is working because of we passing the string into it

    return 0;
}
