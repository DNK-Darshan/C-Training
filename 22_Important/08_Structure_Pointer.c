#include <stdio.h>

struct student
{
    int roll_no;
    int batch;
    int marks;
    char name[20];
};


int main()
{
    struct student s1 = {14, 2019, 89, "Harsh"};

    struct student *ptr = &s1;

    // Print Using dot(.) operator
    printf("\nRoll_Number: %d", (*ptr).roll_no);
    printf("\nBatch: %d", (*ptr).batch);
    printf("\nMarks: %d", (*ptr).marks);
    printf("\nName: %s", (*ptr).name);

    // Print using arrow Operator
    printf("\nRoll_Number: %d", ptr->roll_no);
    printf("\nBatch: %d", ptr->batch);
    printf("\nMarks: %d", ptr->marks);
    printf("\nName: %s", ptr->name);

    return 0;
}
