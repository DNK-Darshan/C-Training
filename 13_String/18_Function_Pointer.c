#include <stdio.h>
#define OPS 4

float sum(float a, float b) {
    return (a + b);
}
float sub(float a, float b) {
    return (a - b);
}
float mul(float a, float b) {
    return (a * b);
}
float div(float a, float b) {
    return (a / b);
}

int main()
{
    float (*operation[OPS])(float, float) = {sum, sub, mul, div};
    int choice;
    float a, b;

    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);
    printf("\nEnter Two Numbers: ");
    scanf("%f %f", &a, &b);

    printf("%f", operation[choice](a, b));

    return 0;
}
