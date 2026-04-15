#include <stdio.h>

struct
{
    unsigned int age : 3; // 2 raised to 3          2 x 2 x 2 = 8 = 0 to 7
} Age;

int main()
{
    Age.age = 4;
    printf("Sizeof(Age): %d\n", sizeof(Age));
    printf("Age.age: %d\n", Age.age);

    Age.age = 7;
    printf("Age.age : %d\n", Age.age);

    Age.age = 8;
    printf("Age.age : %d\n", Age.age);

    return 0;
}

/*

There is store only three bit value in age variable. So, it can store only 0 to 7 value. If we try to store 8 value then it will store 0 value because of it binary representation is 1000 and it will store only last three bit value which is 000. So, it will store 0 value.

*/
