#include <stdio.h>
#pragma pack(1)

struct abc
{
    short s[5];
    union def
    {
        float y;
        long z;
    } u;
    
} t;


int main()
{
    printf("\nThe Size of the Structure: %d", sizeof(t));
    return 0;
}
