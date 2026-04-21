#include <stdio.h>

struct student {
    char *name;
    int roll;
    int age;
    double marks;
};

int main()
{
    struct student s1[10];

    int n = sizeof(s1);

    printf("Size of structure student is %d\n", n);
    printf("Size of structure student is %d\n", sizeof(struct student));
    printf("Size of structure student is %d\n", sizeof(s1)/sizeof(struct student));

    printf("Size of pointer is %d\n", sizeof(struct student*));
    printf("Size of pointer is %d\n", sizeof(char*));

    return 0;
}
