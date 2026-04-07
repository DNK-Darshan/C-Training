#include <stdio.h>
#define add(x, y) x+y
#define greater(a, b) if(a > b) \
                        printf("%d is greater than %d", a, b); \
                      else \
                        printf("%d is lesser than %d", a, b);

int main()
{
    printf("Addition of two number is: %d \n", add(4, 6));
    greater(5, 4);
    printf("\nResult of expression a * b + c: %d", 5 * add(4, 6));
    printf("\nDate: %s", __DATE__);
    printf("\nTime: %s", __TIME__);
    return 0;
}

// We can also use macros like a functions
// We can write a multiple lines using \
// First expansion and then evaluation
// Some predefine macros like __DATE__ and __TIME__ can print current date and time