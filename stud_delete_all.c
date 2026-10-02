#include "student.h"

void delete_all(void)
{
    struct student *temp;

    if (head == NULL)
    {
        printf("No student records found!\n");
        return;
    }

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    head = NULL;

    printf("All student records deleted successfully!\n");
}
