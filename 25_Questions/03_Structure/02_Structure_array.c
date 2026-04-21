#include <stdio.h>

struct student
{
    char name[100];
    int roll_number;
    float marks;
};

void findTopper(struct student s1[], int n) {
    struct student topper = s1[0];

    for(int i = 1; i < n; i++) {
        if(s1[i].marks > topper.marks) {
            topper = s1[i];
        }
    }

    printf("\nTopper Details:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_number);
    printf("Marks: %.2f\n", topper.marks);
}

int main()
{
    struct student s1[10];

    for(int i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", s1[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s1[i].roll_number);
        printf("Enter marks: ");
        scanf("%f", &s1[i].marks);
    }

    findTopper(s1, 5);

    // for(int i = 0; i < 5; i++) {
    //     printf("\nName: %s\n", s1[i].name);
    //     printf("Roll Number: %d\n", s1[i].roll_number);
    //     printf("Marks: %.2f\n", s1[i].marks);
    //     // printf("\n");
    // }

    return 0;
}
