#include <stdio.h>

int main()
{
    // int a[10] = {1, 0, 0, 0, 0, 2, 3, 0, 0, 0};

    int a[10] = {[0] = 1, [5] = 2, [6] = 3};
    return 0;
}


/*

- We can write array using position and other position fiels 0 automatically we can not initialized it with 0 manually.
- int a[10] = {[0] = 1, [5] = 2, [6] = 3} this type of array declaration is known as a designated array.

Advantages : 
    - No need to bother about the entries containing zeros it fiels automatically zero.
    - No need to bother about order at all. Both definitions are same.
        int a[10] = {[5] = 1, [6] = 2, [0] = 3};
        int a[10] = {[0] = 1, [5] = 2, [6] = 3};
    - We can write array like :
        int a[10] = {1, 2, 3, [5] = 4, 5, [8] = 6};
*/