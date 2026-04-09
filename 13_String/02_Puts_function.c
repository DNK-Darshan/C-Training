#include <stdio.h>

int main()
{
    char *ptr = "Hello World";
    printf(" %s\n", ptr);

    // .5 prints the only 5 character to the string
    printf(" %.5s\n", ptr);

    // 7 creates the 7 block to store the character and it is start storing the character to the end so we have 2 space blank to the strating 
    printf(" %7.5s\n", ptr);

    // Puts character automatically writes the new line character after write the full string
    puts(ptr);
    puts(ptr);

    return 0;
}
