#include "student.h"

void reverse_list(void)
{
    struct student *prev, *current, *next;

    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    prev = NULL;
    current = head;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    printf("Student list reversed successfully!\n");
}
