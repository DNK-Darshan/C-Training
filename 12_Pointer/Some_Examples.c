/*
We can not reassign the constant variable.

#include <stdio.h>

void fun(const int *ptr) {
    *ptr = 0;
}

int main () {
    const int i = 10;
    fun(&i);
    return 0;
}
*/

// We can use the %p for print the hex address of the pointing variable 
#include <stdio.h>

int main()
{
    int i = 10;
    int *p = &i;
    printf("The Address of variable i is %p \n", p);
    return 0;
}

/*

Pointer Arithmaic (Addition) : 
    - When we store the address of the array into the pointer variable then it is plus the array indexes not a address bit.
    - if we write this p = &a[0]
                       p = p + 3
                         = &a[3] 

Pointer Arithmaic (Subtraction) : 
    - It is same behave like a Addition but addition is add the value whenever subtraction is 

*/