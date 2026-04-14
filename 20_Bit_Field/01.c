#include <stdio.h>

struct
{
    int width;
    int height;
} s1;

struct
{
    int width : 1;
    int height : 1;
} s2;

int main()
{
    printf("Memory size occupied by status1: %d\n", sizeof(s1));
    printf("Memory size occupied by status2: %d\n", sizeof(s2));

    return 0;
}
