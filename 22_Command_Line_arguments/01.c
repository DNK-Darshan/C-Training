#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nThe value of argc is %d\n", argc);

    for(int i = 0; i < argc; i++) {
        printf("\nThe arguments at index number %d has a value of %s \n", i, argv[i]);
    }

    return 0;
}
