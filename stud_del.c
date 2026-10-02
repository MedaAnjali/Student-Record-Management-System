
#include "student.h"

void delete_student(void)
{
    struct student *temp, *prev;
    char choice, name[50];
    int roll, found = 0;

    if (head == NULL)
    {
        printf("No student records found!\n");
        return;
    }

    printf("\nR/r : Enter roll number to delete\n");
    printf("N/n : Enter name to delete\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if (choice == 'R' || choice == 'r')
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
    }
    else if (choice == 'N' || choice == 'n')
    {
        printf("Enter name: ");
        scanf(" %49[^\n]", name);

        printf("\nMatching Records:\n");
        printf("-----------------------------------\n");
        printf("Roll No\t\tName\n");
        printf("-----------------------------------\n");

        temp = head;

        while (temp != NULL)
        {
            if (strcasecmp(temp->name, name) == 0)
            {
                printf("%d\t\t%s\n",
                       temp->rollno, temp->name);
                found = 1;
            }

            temp = temp->next;
        }

        if (found == 0)
        {
            printf("Name not found!\n");
            return;
        }

        printf("-----------------------------------\n");
        printf("Enter roll number to delete: ");
        scanf("%d", &roll);

        temp = head;
        found = 0;

        while (temp != NULL)
        {
            if (temp->rollno == roll &&
                strcasecmp(temp->name, name) == 0)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if (found == 0)
        {
            printf("Invalid roll number for this name!\n");
            return;
        }
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }

    temp = head;
    prev = NULL;

    while (temp != NULL)
    {
        if (temp->rollno == roll)
        {
            if (prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            free(temp);

            printf("Record deleted successfully!\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Roll number not found!\n");
}

