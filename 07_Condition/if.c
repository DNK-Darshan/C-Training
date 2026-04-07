#include <stdio.h>

int main()
{
    int var;

    printf("Enter the value of Number: ");
    scanf("%d", &var);

    if(var < 0) {
        printf("\nThe Number is Negative");
    } else if(var > 0) {
        printf("\nThe Number is Positive");
    } else {
        printf("\nThe Number is Zero");
    }

    return 0;
}
