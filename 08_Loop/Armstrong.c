#include <stdio.h>

int main()
{
    int n, count = 0, result = 0, mul = 1, cnt, rem;
    printf("\nEnter n: ");
    scanf("%d", &n);

    int q = n;
    while (q != 0) {
        q = q/10;
        count++;
    }
    cnt = count;
    q = n;
    
    while(q != 0) {
        rem = q % 10;
        while (cnt != 0) {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }

    if(result == n) {
        printf("\nThis is Armstrong NUmber..!");
    } else {
        printf("\nThis is not Armstrong NUmber..!");
    }

    return 0;
}
