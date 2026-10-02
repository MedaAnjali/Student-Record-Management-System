
#include "student.h"

void sort_students(void)
{
    struct student *temp, *ptr, *prev;
    struct student *current, *next;
    char choice;
    int swapped;

    if (head == NULL || head->next == NULL)
    {
        printf("Not enough records to sort!\n");
        return;
    }

    printf("\nN/n : Sort with name\n");
    printf("P/p : Sort with percentage\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if (choice != 'N' && choice != 'n' &&
        choice != 'P' && choice != 'p')
    {
        printf("Invalid choice!\n");
        return;
    }

    do
    {
        swapped = 0;
        prev = NULL;
        current = head;

        while (current->next != NULL)
        {
            next = current->next;

            if ((choice == 'N' || choice == 'n') &&
                strcasecmp(current->name, next->name) > 0)
            {
                swapped = 1;
            }
            else if ((choice == 'P' || choice == 'p') &&
                     current->percentage < next->percentage)
            {
                swapped = 1;
            }
            else
            {
                prev = current;
                current = current->next;
                continue;
            }

            current->next = next->next;
            next->next = current;

            if (prev == NULL)
                head = next;
            else
                prev->next = next;

            prev = next;
        }

    } while (swapped);

    printf("Records sorted successfully!\n");
}


