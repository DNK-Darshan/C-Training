#include <stdio.h>

int str_Length(char s[]) {
    int count = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main()
{
    // char *s = "Hello This is Testing";
    // int count = 0;

    // for(int i = 0; s[i] != '\0'; i++) {
    //     count++;
    // }

    // printf("\nString Length is %d\n", count);

    char s[100];

    printf("\nEnter String: ");
    fgets(s, sizeof(s), stdin);

    int length = str_Length(s);

    printf("\nString counter is %d\n", length);
    
    return 0;
}
