# Student Record Management System

## Mini Project – II

Student Record Management System is a menu-driven C programming project developed using a singly linked list and dynamic memory allocation.

The system allows the user to add, delete, display, modify, search, sort, save, reverse and delete student records.

---

## Objective

The main objective of this project is to develop a Student Record Management System in C using:

- Singly linked list
- Dynamic memory allocation
- Modular programming
- Searching
- Sorting
- File handling
- Pointer operations
- Memory management

---

## Student Record Structure

Each student record contains:

- Roll Number
- Student Name
- Percentage
- Pointer to the next student record

The records are maintained using a singly linked list.

---

## Project Modules

The project is divided into separate source files.

| File | Responsibility |
|------|----------------|
| `stud_main.c` | Main function, menu and overall program flow |
| `stud_add.c` | Add a new student record |
| `stud_del.c` | Delete a student record |
| `stud_show.c` | Display all student records |
| `stud_mod.c` | Modify an existing student record |
| `stud_save.c` | Save and load student records |
| `student.h` | Structure definition, declarations and function prototypes |

---

## Features

### 1. Add New Record

When the user selects `a/A`, the program calls the add-record function.

A new student record is created and inserted into the singly linked list.

The following operations are performed:

- A new node is created dynamically using `malloc()`.
- The smallest positive integer that is not already used is assigned as the roll number.
- The roll number must be unique.
- The user is asked to enter the student's name.
- The user is asked to enter the student's percentage.
- The percentage must be between `0.00` and `100.00`.
- The student name should not be empty.
- The new node is inserted into the singly linked list.

#### Roll Number Assignment

The program automatically assigns the smallest available positive integer as the roll number.

For example, if the existing roll numbers are:

1, 2, 4, 5

the next student will be assigned:

Roll Number: 3

If the existing roll numbers are:

1, 2, 3, 4

the next student will be assigned:

Roll Number: 5

#### Example

Enter student name: Rahul
Enter percentage: 78.50

Student record added successfully.

The newly created node is dynamically allocated and linked to the existing singly linked list.

### 2. Delete Record

When the user selects `d/D`, the program displays the available delete options.

R/r : Enter roll number to delete
N/n : Enter name to delete

#### Delete by Roll Number

The program searches the linked list for the specified roll number.

If the record is found:

- The node is unlinked from the singly linked list.
- The dynamically allocated memory of the node is released using `free()`.
- A successful deletion message is displayed.

If the roll number is not found, an appropriate message is displayed.

#### Delete by Name

The program searches the linked list for matching student names.

If multiple records have the same name, all matching records are displayed along with their roll numbers.

The user can then enter the roll number of the record that needs to be deleted.

The selected node is removed from the linked list and its allocated memory is released using `free()`.

#### Example

Enter your choice: d

R/r : Enter roll number to delete
N/n : Enter name to delete

Enter your choice: r
Enter roll number: 2

Student record deleted successfully.

### 3. Display Records

When the user selects `s/S`, the program displays all student records currently present in the linked list.

The records are displayed in a tabular format.

The following details are displayed:

- Roll Number
- Student Name
- Percentage

#### Example

Roll No.    Name             Percentage
1           Rahul            78.50
2           Priya            85.25
3           Anjali           92.00

If the linked list is empty, the program displays an appropriate message instead of displaying an empty table.

The display operation does not modify the linked list.

### 4. Modify Record

When the user selects `m/M`, the program allows an existing student record to be modified.

The record can be searched using:

- Roll Number
- Student Name
- Percentage

After finding the required record, the existing student details are displayed.

The user can modify:

- Student Name
- Percentage

The roll number is not changed.

If multiple records match the search criteria, the matching records are displayed and the user can select the required roll number.

If no matching record is found, an appropriate message is displayed.

#### Example

Enter your choice: m

Enter search option:
R/r : Search by Roll Number
N/n : Search by Name
P/p : Search by Percentage

Enter your choice: r
Enter roll number: 2

Current Record:
Roll No.   : 2
Name       : Priya
Percentage : 85.25

Enter new name: Priyanka
Enter new percentage: 88.50

Student record modified successfully.

### 5. Save Records

When the user selects `v/V`, the current student records are saved into the file:

student.dat

The program stores the student details so that the records can be used again when the program is started.

The save operation performs the following steps:

- Opens `student.dat` for writing.
- Traverses the complete singly linked list.
- Writes each student record into the file.
- Closes the file after saving.
- Displays a confirmation message.

#### Example

Enter your choice: v

Records saved successfully to student.dat

#### Loading Records

When the program starts, it checks whether `student.dat` is available.

If the file exists:

- The saved student records are read from the file.
- Nodes are created dynamically.
- The records are added to the linked list.

If the file does not exist:

- The program starts with an empty linked list.

The save and load operations allow student records to remain available even after the program is terminated.

### 6. Exit

The program provides options to exit from the application.

When the user selects the exit option, the program terminates after handling the required memory management.

Before termination, all dynamically allocated nodes in the linked list are released using `free()`.

#### Save and Exit

If the user chooses to save the records before exiting:

- The current records are saved into `student.dat`.
- All dynamically allocated nodes are freed.
- The program terminates successfully.

#### Exit Without Saving

If the user chooses to exit without saving:

- The current changes are not written to `student.dat`.
- All dynamically allocated nodes are freed.
- The program terminates.

#### Example

Enter your choice: e

Exit without saving? (Y/N): y

All allocated memory has been released.
Program terminated successfully.

### 7. Sort Records

When the user selects `t/T`, the program provides options to sort the student records.

The records can be sorted based on:

- Student Name
- Percentage

#### Sort by Name

The student records are arranged in alphabetical order based on the student name.

Example:

Before sorting:

Rahul
Anjali
Kiran
Priya

After sorting:

Anjali
Kiran
Priya
Rahul

#### Sort by Percentage

The student records are arranged in descending order of percentage.

The student with the highest percentage appears first.

Example:

Before sorting:

78.50
92.00
85.25
66.75

After sorting:

92.00
85.25
78.50
66.75

The sorting operation changes the order of the records in the linked list.

### 8. Delete All Records

When the user selects `l/L`, all student records present in the linked list are deleted.

The program traverses the complete linked list and releases the memory allocated for every node using `free()`.

The following steps are performed:

- Start from the first node.
- Store the address of the next node.
- Free the current node.
- Move to the next node.
- Continue until all nodes are deleted.
- Set the head pointer to `NULL`.

#### Example

Before deleting all records:

1 -> 2 -> 3 -> 4 -> NULL

After deleting all records:

NULL

The program displays a confirmation message after all records are successfully deleted.

Deleting all records from the linked list does not automatically delete the `student.dat` file.

### 9. Reverse the List

When the user selects `r/R`, the program reverses the order of the student records in the singly linked list.

The existing nodes are used for reversing the list. No new nodes are created.

The `next` pointers of the nodes are changed so that the last node becomes the first node.

#### Example

Before reversing:

1 -> 2 -> 3 -> 4 -> NULL

After reversing:

4 -> 3 -> 2 -> 1 -> NULL

The reverse operation changes only the order of the linked list. The student details stored inside each node remain unchanged.

### Input Validation

The program validates the user input wherever required.

The following validations are performed:

- Student name should not be empty.
- Percentage should be within the range `0.00` to `100.00`.
- Roll number should be a positive integer.
- Roll number should be unique when adding a new record.
- Invalid menu choices are handled appropriately.
- If a requested record is not found, an appropriate message is displayed.
- Invalid input should not cause the program to terminate unexpectedly.

These validations help maintain valid and consistent student records.

### Dynamic Memory Management

The project uses dynamic memory allocation for creating student records.

When a new student record is added, memory is allocated dynamically using:

malloc()

When a student record is deleted, the memory allocated for that node is released using:

free()

When all records are deleted, the memory allocated for every node is released.

Before the program terminates, all remaining dynamically allocated nodes are also freed.

This ensures that the program does not leave dynamically allocated memory unused and helps prevent memory leaks.

### File Handling

The project uses file handling to store student records permanently.

The student records are stored in the file:

student.dat

The file is used for saving and loading student records.

#### Saving Records

When the user selects `v/V`, the current records in the linked list are written to `student.dat`.

The program:

- Opens the file.
- Traverses the linked list.
- Writes each student record to the file.
- Closes the file.
- Displays a success message.

#### Loading Records

When the program starts, it checks whether `student.dat` exists.

If the file exists:

- The saved records are read from the file.
- Memory is allocated for each record.
- The records are added to the linked list.

If the file does not exist, the program starts with an empty linked list.

File handling allows the student records to be retained and used again when the program is executed.

### Main Menu

The program displays the main menu repeatedly until the user chooses an exit option.

The available menu options are:

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify a record
v/V : Save records
e/E : Exit
t/T : Sort the list
l/L : Delete all the records
r/R : Reverse the list

The user can enter either uppercase or lowercase characters for the menu options.

After completing an operation, the program returns to the main menu so that the user can perform another operation.

The program continues running until the user selects the exit option.

### Data Structure Used

The project uses a Singly Linked List to store and manage student records.

Each node in the linked list contains:

- Roll Number
- Student Name
- Percentage
- Pointer to the next node

The nodes are connected using the `next` pointer.

Example:

1 -> 2 -> 3 -> 4 -> NULL

The last node points to `NULL`, which indicates the end of the linked list.

Dynamic memory allocation is used to create nodes whenever a new student record is added.

The linked list makes it possible to dynamically add and delete student records without using a fixed-size array.

### Project Modules

The project is divided into multiple source files to keep the program modular and easy to understand.

The main files are:

- `stud_main.c`
- `stud_add.c`
- `stud_del.c`
- `stud_show.c`
- `stud_mod.c`
- `stud_save.c`
- `student.h`

#### stud_main.c

Contains:

- `main()` function
- Main menu
- User choice handling
- Overall program flow

#### stud_add.c

Responsible for:

- Adding a new student record
- Creating a new node using dynamic memory allocation
- Assigning a unique roll number
- Reading student details
- Inserting the node into the linked list

#### stud_del.c

Responsible for:

- Deleting a record by roll number
- Deleting a record by name
- Removing the selected node from the linked list
- Releasing allocated memory

#### stud_show.c

Responsible for:

- Displaying all student records
- Displaying records in a tabular format
- Handling an empty linked list

#### stud_mod.c

Responsible for:

- Searching for student records
- Modifying student details
- Updating the student name
- Updating the percentage
- Handling multiple matching records

#### stud_save.c

Responsible for:

- Saving student records into `student.dat`
- Loading student records from `student.dat`
- Performing file-related operations

#### student.h

Contains:

- Required header files
- Student structure definition
- Function declarations
- Required declarations used by multiple source files.

### Compilation

All the source files are compiled together to create the final executable.

Use the following command:

gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c -o student

If there are no compilation errors, an executable file named `student` will be created.

The generated executable can be run using:

./student

### Execution

After successful compilation, run the executable using:

./student

The Student Record Management System will start and display the main menu.

The user can select any of the available options to manage the student records.

The program continues to display the menu after each operation until the user chooses to exit.

### Example Execution

The following is an example of how the Student Record Management System can be used.

******** STUDENT RECORD MENU ********

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify a record
v/V : Save records
e/E : Exit
t/T : Sort the list
l/L : Delete all the records
r/R : Reverse the list

Enter your choice: a

Enter student name: Rahul
Enter percentage: 78.50

Student record added successfully.

Enter your choice: s

Roll No.    Name             Percentage
1           Rahul            78.50

Enter your choice: v

Records saved successfully to student.dat

### Conclusion

The Student Record Management System is a menu-driven C project developed using a singly linked list and dynamic memory allocation.

The project demonstrates the practical use of:

- Structures
- Pointers
- Singly linked lists
- Dynamic memory allocation
- Searching
- Sorting
- File handling
- Modular programming
- Memory management

The system provides the functionality to:

- Add student records
- Delete student records
- Display student records
- Modify student records
- Save and load records using `student.dat`
- Sort records
- Delete all records
- Reverse the linked list

The project helps in understanding how linked lists, pointers, dynamic memory allocation and file handling can be used together to build a practical C application.

### Future Enhancements

The Student Record Management System can be further enhanced by adding:

- Additional student details such as age, branch and contact information.
- More advanced search options.
- Additional sorting options.
- Better input validation.
- Improved user interface.
- Password-based access control.
- Backup and restore functionality.
- Additional file-handling features.

### Project Summary

The Student Record Management System is a menu-driven C application designed to manage student records using a singly linked list.

The project covers the complete record management process, including:

- Adding new student records
- Deleting student records
- Displaying student records
- Modifying existing records
- Saving records to a file
- Loading records from a file
- Sorting records
- Deleting all records
- Reversing the linked list
- Dynamic memory allocation and deallocation

The project is divided into multiple source files to maintain a modular structure.

The use of linked lists, pointers, dynamic memory allocation and file handling provides practical experience in developing a real-world C application.

### End of README

Thank you for reviewing the Student Record Management System project.

This project demonstrates the practical implementation of C programming concepts including linked lists, pointers, dynamic memory allocation, file handling, searching, sorting and modular programming.