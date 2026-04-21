#include <stdio.h>

struct student
{
    char name[100];
    int roll_number;
    float marks;
};

void get_Details(struct student *s1) {
    printf("Enter name: ");
    scanf("%s", s1->name);
    printf("Enter roll number: ");
    scanf("%d", &s1->roll_number);
    printf("Enter marks: ");
    scanf("%f", &s1->marks);
}

void print_Details(struct student s1) {
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_number);
    printf("Marks: %.2f\n", s1.marks);
}

int main()
{
    struct student s1;
    get_Details(&s1);
    print_Details(s1);

    return 0;
}
