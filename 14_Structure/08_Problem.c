#include <stdio.h>

struct abc
{
    char x, y, z;
};

int main()
{
    struct abc p = {'1', '0', 'a' + 2};
    struct abc *q = &p;

    printf("%c %c", *((char*)q + 1), *((char*)q + 2));

    return 0;
}
