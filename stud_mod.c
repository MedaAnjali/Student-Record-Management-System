
#include "student.h"

void modify_student(void)
{
    struct student *temp;
    char choice, name[50];
    int roll, found = 0;
    float percentage;

    if (head == NULL)
    {
        printf("No student records found!\n");
        return;
    }

    printf("\nEnter which record to search for modification\n");
    printf("R/r : Search by roll number\n");
    printf("N/n : Search by name\n");
    printf("P/p : Search by percentage\n");
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

        temp = head;

        printf("\nMatching records:\n");
        printf("Roll No\t\tName\t\tPercentage\n");

        while (temp != NULL)
        {
            if (strcasecmp(temp->name, name) == 0)
            {
                printf("%d\t\t%s\t\t%.2f\n",
                       temp->rollno,
                       temp->name,
                       temp->percentage);
                found = 1;
            }

            temp = temp->next;
        }

        if (found == 0)
        {
            printf("Name not found!\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d", &roll);
    }
    else if (choice == 'P' || choice == 'p')
    {
        printf("Enter percentage: ");
        scanf("%f", &percentage);

        temp = head;

        printf("\nMatching records:\n");
        printf("Roll No\t\tName\t\tPercentage\n");

        while (temp != NULL)
        {
            if (temp->percentage == percentage)
            {
                printf("%d\t\t%s\t\t%.2f\n",
                       temp->rollno,
                       temp->name,
                       temp->percentage);
                found = 1;
            }

            temp = temp->next;
        }

        if (found == 0)
        {
            printf("Percentage not found!\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d", &roll);
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }

    temp = head;

    while (temp != NULL)
    {
        if (temp->rollno == roll)
        {
            if (choice == 'N' || choice == 'n')
            {
                if (strcasecmp(temp->name, name) != 0)
                {
                    printf("Invalid roll number for this name!\n");
                    return;
                }
            }

            if (choice == 'P' || choice == 'p')
            {
                if (temp->percentage != percentage)
                {
                    printf("Invalid roll number for this percentage!\n");
                    return;
                }
            }

            printf("\nCurrent Student Details:\n");
            printf("Roll Number : %d\n", temp->rollno);
            printf("Name        : %s\n", temp->name);
            printf("Percentage  : %.2f\n", temp->percentage);

            printf("\nEnter updated name: ");
            scanf(" %49[^\n]", temp->name);

            printf("Enter updated percentage: ");
            scanf("%f", &temp->percentage);

            if (temp->percentage < 0 || temp->percentage > 100)
            {
                printf("Invalid percentage!\n");
                return;
            }

            printf("Record modified successfully!\n");
            return;
        }

        temp = temp->next;
    }

    printf("Record not found!\n");
}


