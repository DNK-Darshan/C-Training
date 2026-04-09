#include <stdio.h>

struct abc
{
    int x, y;
};


int main()
{
    struct abc a = {0, 1};
    struct abc *ptr = &a;

    printf("%d %d \n", ptr->x, ptr->y);

    return 0;
}
