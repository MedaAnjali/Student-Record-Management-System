
#include "student.h"

struct student *head = NULL;

int main()
{
    char choice, exit_choice;

    load_students();

    while (1)
    {
        printf("\n******** STUDENT RECORD MANAGEMENT ********\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
        printf("e/E : Exit\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all records\n");
        printf("r/R : Reverse the list\n");

        printf("\nEnter your choice: ");
        scanf(" %c", &choice);

        switch (choice)
        {
            case 'a':
            case 'A':
                add_student();
                break;

            case 'd':
            case 'D':
                delete_student();
                break;

            case 's':
            case 'S':
                show_students();
                break;

            case 'm':
            case 'M':
                modify_student();
                break;

            case 'v':
            case 'V':
                save_students();
                break;

            case 't':
            case 'T':
                sort_students();
                break;

            case 'l':
            case 'L':
                delete_all();
                break;

            case 'r':
            case 'R':
                reverse_list();
                break;

            case 'e':
            case 'E':
                printf("\nS/s : Save and exit\n");
                printf("E/e : Exit without saving\n");
                printf("Enter your choice: ");
                scanf(" %c", &exit_choice);

                if (exit_choice == 'S' || exit_choice == 's')
                {
                    save_students();
                    delete_all();
                    printf("Saved and exited successfully!\n");
                    return 0;
                }
                else if (exit_choice == 'E' || exit_choice == 'e')
                {
                    delete_all();
                    printf("Exited without saving!\n");
                    return 0;
                }
                else
                {
                    printf("Invalid choice! Returning to main menu.\n");
                }

                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}


