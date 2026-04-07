#include <stdio.h>

int fun(int num) {
    int count = 2;
    while(num) {
        count++;
        num >>= 2;
    }
    return count;
}

int main()
{
    int num = 435;
    printf("Counter Is: %d", fun(num));
    return 0;
}
