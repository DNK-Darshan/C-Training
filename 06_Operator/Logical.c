#include <stdio.h>

int main()
{
    int a = 5;

    if(a == 5 && a != 6 && a <= 56 && a > 4) {
        printf("\nWelcome in End Operator");
    } else {
        printf("\nThis is false condition");
    }

    if(a != 5 || a == 6 || a >= 56 || a > 4) {
        printf("\nWelcome in Or Operator");
    } else {
        printf("\nThis is false condition");
    }

    if(!(a == 5)) {
        printf("\nWelcome in Not Operator");
    } else {
        printf("\nThis is false condition");
    }

    return 0;
}

/*
&& :
    Return true when all the conditions under consideration are true and returns false when any one or more than one condition is false.

|| : 
    Return true when one or more than one condition under consideration is true and return false when all confitions are fasle.

! : 
    Return true when condition is false and return false when condition is true.

*/