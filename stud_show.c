#include "student.h"

void show_students(void)
{
    struct student *temp;

    if (head == NULL)
    {
        printf("No student records found!\n");
        return;
    }

    temp = head;

    printf("\n---------------------------------------------\n");
    printf("Roll No\t\tName\t\tPercentage\n");
    printf("---------------------------------------------\n");

    while (temp != NULL)
    {
        printf("%d\t\t%s\t\t%.2f\n",
               temp->rollno,
               temp->name,
               temp->percentage);

        temp = temp->next;
    }

    printf("---------------------------------------------\n");
}
