#include <stdio.h>

int main()
{
    int pow = 1, base, exponent, expo;
    double power = 1.0;

    printf("\nEnter Base: ");
    scanf("%d", &base);
    printf("\nEnter Power: ");
    scanf("%d", &exponent);

    expo = exponent;
    if(exponent > 0) {
        while (exponent != 0)
        {
            pow = pow * base;
            exponent--;
        }
        printf("%d to the power of %d is %d", base, expo, pow);
    } else {
        while(exponent != 0) {
            power = power * (1.0/base);
            exponent++;
        }
        printf("%d to the power of %d is %.10f", base, expo, power);
    }

    return 0;
}
