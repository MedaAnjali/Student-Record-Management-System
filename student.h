#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};

extern struct student *head;

void add_student(void);
void delete_student(void);
void show_students(void);
void modify_student(void);
void save_students(void);
void load_students(void);
void sort_students(void);
void delete_all(void);
void reverse_list(void);
