#include <stdio.h>

struct student
{
    int id;
    char name[20];
    float marks;
};


int main()
{
    struct student s[3];

    for(int i = 0; i < 3; i++) {
        printf("\nEnter Id: ");
        scanf("%d", &s[i].id);
        printf("\nEnter Name: ");
        scanf("%s", &s[i].name);
        printf("\nEnter Marks: ");
        scanf("%f", &s[i].marks);
    }

    for(int i = 0; i < 3; i++) {
        printf("\nId: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %f", s[i].marks);
    }

    return 0;
}
