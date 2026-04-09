#include <stdio.h>

typedef struct
{
    char *name;
    int age;
    int salary;
} company;

int main()
{
    company c1;

    c1.age = 90;
    c1.name = "Harsh";
    c1.salary = 20000;

    printf("\n%d", c1.age);
    printf("\n%s", c1.name);
    printf("\n%d\n", c1.salary);

    return 0;
}

/*

Typedef keyword is help us to create our own data type and after create it we can used it into our program

*/