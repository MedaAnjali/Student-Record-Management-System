
#include "student.h"

void save_students(void)
{
    struct student *temp;
    FILE *fp;

    fp = fopen("student.dat", "wb");

    if (fp == NULL)
    {
        printf("Unable to open file!\n");
        return;
    }

    temp = head;

    while (temp != NULL)
    {
        fwrite(&temp->rollno, sizeof(int), 1, fp);
        fwrite(temp->name, sizeof(temp->name), 1, fp);
        fwrite(&temp->percentage, sizeof(float), 1, fp);

        temp = temp->next;
    }

    fclose(fp);

    printf("Student records saved successfully!\n");
}

void load_students(void)
{
    struct student *newnode, *temp;
    FILE *fp;

    fp = fopen("student.dat", "rb");

    if (fp == NULL)
    {
        head = NULL;
        return;
    }

    while (1)
    {
        newnode = (struct student *)malloc(sizeof(struct student));

        if (newnode == NULL)
        {
            printf("Memory allocation failed!\n");
            fclose(fp);
            return;
        }

        if (fread(&newnode->rollno, sizeof(int), 1, fp) != 1)
        {
            free(newnode);
            break;
        }

        if (fread(newnode->name, sizeof(newnode->name), 1, fp) != 1 ||
            fread(&newnode->percentage, sizeof(float), 1, fp) != 1)
        {
            free(newnode);
            printf("Error reading student records!\n");
            break;
        }

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
    }

    fclose(fp);
}


