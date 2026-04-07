#include <stdio.h>

int fun(int x, int y) {
    x = 14;
    y = 11;
}
// int fun(int x) {
//     x = 14;
//     return x;
// }

int main()
{
    int x = 10, y = 20;
    fun(x, y);
    printf("\nX: %d \t Y: %d\n", x, y);
    // int x = 10;
    // x = fun(x);
    // printf("\nX: %d\n", x);
    return 0;
}

/*

Call by Value :
    Here values of the actual parameters will be copied to formal parameters and these two different parameters values in different locations.

*/
