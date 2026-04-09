#include <stdio.h>

/*

struct
{
    char *name;
    int age;
    int salary;
} emp1, emp2;

int manager() {
    struct
    {
        char *name;
        int age;
        int salary;
    } manager;

    manager.age = 27;

    if(manager.age > 30)
        manager.salary = 65000;
    else 
    manager.salary = 55000;

    return manager.salary;
}

int main()
{
    printf("\nEnter the salary of EMP1: ");
    scanf("%d", &emp1.salary);
    printf("\nEnter the salary of EMP2: ");
    scanf("%d", &emp2.salary);

    printf("\nEmp1 Salary: %d", emp1.salary);
    printf("\nEmp2 Salary: %d", emp2.salary);
    printf("\nManager Salary: %d", manager());
    
    return 0;
}

*/

struct company
{
    char *name;
    int age;
    int salary;
};

int manager() {
    struct company manager;

    manager.age = 27;

    if(manager.age > 30)
        manager.salary = 65000;
    else 
        manager.salary = 55000;

    return manager.salary;
}

int main()
{
    struct company emp1;
    struct company emp2;
    
    printf("\nEnter the salary of EMP1: ");
    scanf("%d", &emp1.salary);
    printf("\nEnter the salary of EMP2: ");
    scanf("%d", &emp2.salary);

    printf("\nEmp1 Salary: %d", emp1.salary);
    printf("\nEmp2 Salary: %d", emp2.salary);
    printf("\nManager Salary: %d \n", manager());

    return 0;
}