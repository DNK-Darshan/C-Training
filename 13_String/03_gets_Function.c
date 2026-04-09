#include <stdio.h>

int main()
{
    char a[10];
    printf("\nEnter Input: ");

    // Scanf function doesn't store the white space characters in the string variable.
    // scanf("%s", a);

    // Using this we can print the 9 character of string which is without the blank spaces
    scanf("%9s", a);

    // Gets Fucntion accept the white space also but it is not print string out side the array range.
    // gets(a);

    printf(" %s\n", a);
    return 0;
}
