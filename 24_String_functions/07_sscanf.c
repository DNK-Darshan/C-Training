#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello Manager 30";

    char name[10], defignation[10];
    int age, ret;

    ret = sscanf(str, "%s %s %d", name, defignation, &age);

    printf("Name: %s\n", name);
    printf("Designation: %s\n", defignation);
    printf("Age: %d\n", age);

    return 0;
}
