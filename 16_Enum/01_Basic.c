#include <stdio.h>

enum bool {
    TRUE,
    FALSE
} var;

int main()
{
    var = TRUE;
    printf("%d", var);
    return 0;
}


/*

Enum: 
    - Enum can be declared in the local scope.
    - After declare the local scope it is not visible outside this main function
    - Enum names are automatically initialized by the compiler.

Fact: 
    - Two or more names can have same value.
        enum bool {
            x = 0,
            y = 0,
            y = 0
        } var;

    - We can assign values in any order. All unassigned names will get value as value of previous name + 1
    - Only Interger values are allowed in enum
    - All Enum constants must be unique in their scope.

*/