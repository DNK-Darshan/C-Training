#include <stdio.h>

int main()
{
    int n;
    // do {
    //     printf("Enter Number: ");
    //     scanf("%d", &n);
    // } while (n != 0 && n > 0);

    // if(n == 0) {
    //     printf("\nYou enter the number Zero");
    // } else if(n < 0) {
    //     printf("\nYou enter the number Negative");
    // }

    printf("Enter Number: ");
    scanf("%d", &n);

    while (n != 0) {
        if(n < 0) {
            break;
        }
        printf("Enter Number: ");
        scanf("%d", &n);
    }

    return 0;
}
