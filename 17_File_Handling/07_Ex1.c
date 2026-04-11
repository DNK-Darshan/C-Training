#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("\nEnter Student Name: ");
    scanf("%s", &name);
    printf("\nEnter Student Age: ");
    scanf("%d", &age);
    printf("\nEnter Student CGPA: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Name: %s\n", name);
    fprintf(fptr, "Student Age: %d\n", age);
    fprintf(fptr, "Student CGPA: %.2f", cgpa);

    fclose(fptr);

    return 0;
}
