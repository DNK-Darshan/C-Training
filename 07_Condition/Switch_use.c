#include <stdio.h>

int main()
{
    /* There is not allowed to add multiple cases
    int x = 4;
    
    switch (x)
    {
        case 1:
        printf("\nThe Number is One");
        break;
        
        case 2:
        printf("\nThe Number is Two");
        break;
        
        case 3:
        printf("\nThe Number is Three");
        break;
        
        default:
        printf("\nThis is not valid number");
        break;
    }
    */

    /* Int is allowed float is not allowed
    int a = 1, b = 2, c = 3;
    
    switch (a+b*c)
    {
        case 1:
        printf("\nThe Number is One");
        break;
        
        case 2:
        printf("\nThe Number is Two");
        break;
        
        case 7:
        printf("\nThe Number is Seven");
        break;
        
        default:
        printf("\nThis is not valid number");
        break;
    }
    */
    
    return 0;
}

/*

- There is not allowed to add multiple cases
- Only those expressions are allowed in switch which results in an int constant value.
- Float value is not allowed as a constant value in case label. only integer constants expressions are allowed in case label.
- Variable expression are not allowed in case lables. Although macros are allowed.

*/
