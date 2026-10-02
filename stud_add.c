#include "student.h"

void add_student(void)
{
    struct student *newnode, *temp;
    int roll, found;

    newnode = (struct student *)malloc(sizeof(struct student));

    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter student name: ");
    scanf(" %49[^\n]", newnode->name);

    printf("Enter percentage: ");
    scanf("%f", &newnode->percentage);

    if (newnode->percentage < 0 || newnode->percentage > 100)
    {
        printf("Invalid percentage!\n");
        free(newnode);
        return;
    }

    roll = 1;

    while (1)
    {
        found = 0;
        temp = head;

        while (temp != NULL)
        {
            if (temp->rollno == roll)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if (found == 0)
            break;

        roll++;
    }

    newnode->rollno = roll;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    printf("Student record added successfully!\n");
    printf("Roll number: %d\n", newnode->rollno);
}
