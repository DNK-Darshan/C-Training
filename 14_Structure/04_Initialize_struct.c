#include <stdio.h>

struct abc
{
    int x, y, z;
};


int main()
{
    // We initialize structure like this we can access the structure variable using . (dot Operator) and in structure order does not metter to call the structure member
    struct abc a = {.y = 20, .z = 10, .x = 35};
    printf("\n %d %d %d\n", a.x, a.y, a.z);
    return 0;
}
