#include <stdio.h>

int main()
{
    // char *str = "Hello"; // This will store in text segment and it is read only segment so it is not allowed to replay
    char str[] = "hello";

    printf("First \n");

    str[0] = 'D';

    printf("Second \n");

    printf("New String: %s\n", str);

    printf("third \n");

    return 0;
}
