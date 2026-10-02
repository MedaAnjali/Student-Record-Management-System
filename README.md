# Student Record Management System

A menu-driven **Student Record Management System** developed in **C** using a **Singly Linked List**.

This mini project allows users to add, display, modify, delete, sort, reverse, save, and manage student records through a simple console-based menu.

---

## 📌 Project Overview

The Student Record Management System is designed to demonstrate the use of:

- Structures
- Singly Linked Lists
- Dynamic Memory Allocation
- File Handling
- Searching
- Sorting
- Linked List Operations
- Modular Programming in C

Each student record contains a **Roll Number, Name, and Percentage**.

---

## ✨ Features

### ➕ Add Student
Add a new student record with:
- Roll Number
- Name
- Percentage

### 📋 Show Students
Display all student records currently available in the linked list.

### ✏️ Modify Student
Modify student details using:
- Roll Number
- Name
- Percentage

If multiple records match a name or percentage, the user can select the required record using its roll number.

### 🗑️ Delete Student
Delete a student record using:
- Roll Number
- Name

When multiple students have the same name, matching records are displayed and the required record can be selected using the roll number.

### 💾 Save Records
Save all student records into a file named:

`student.dat`

### 🔤 Sort Records
Sort student records based on:
- Name — Alphabetical Order
- Percentage — Descending Order

### 🧹 Delete All Records
Delete all student records from the linked list at once.

### 🔄 Reverse List
Reverse the order of the student records by changing the linked-list pointers.

### 🚪 Exit
Exit the application with two options:
- Save and Exit
- Exit Without Saving

---

## 🧾 Student Details

Each student record contains:

| Field | Description |
|-------|-------------|
| Roll Number | Unique number assigned to the student |
| Name | Student's name |
| Percentage | Student's percentage |

---

## 🛠️ Technologies Used

- **Language:** C
- **Data Structure:** Singly Linked List
- **File Handling:** Binary File
- **Compiler:** GCC / Clang
- **IDE:** Visual Studio Code
- **Platform:** macOS / Linux / Windows

---

## 📂 Project Structure

```text
Student-Record-Management-System/
│
├── student.h
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_save.c
├── stud_sort.c
├── stud_delete_all.c
├── stud_reverse.c
├── README.md
└── student.dat

🛠️ Technologies Used
C Programming
Singly Linked List
Structures
Pointers
Dynamic Memory Allocation
File Handling
Searching
Sorting
Modular Programming
📂 Project Structure
Student-Record-Management-System/
│
├── student.h
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_save.c
├── stud_sort.c
├── stud_delete_all.c
├── stud_reverse.c
└── README.md
📄 Source Files
File
Description
student.h
Structure definitions and function declarations
stud_main.c
Main function and menu
stud_add.c
Add student records
stud_del.c
Delete student records
stud_show.c
Display student records
stud_mod.c
Modify student records
stud_save.c
Save and load records
stud_sort.c
Sort student records
stud_delete_all.c
Delete all records
stud_reverse.c
Reverse the linked list
💾 File Handling
The program stores student records in:
student.dat
Previously saved records are loaded when the program starts.
The user can choose between:
Save and Exit
Exit Without Saving
▶️ Compilation
Compile all source files using:
gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c stud_sort.c stud_delete_all.c stud_reverse.c -o student
▶️ Run
./student
🎯 Learning Outcomes
This project provides practical understanding of:
Singly Linked Lists
Dynamic Memory Allocation
Structures and Pointers
Insertion and Deletion
Searching
Sorting
File Handling
Linked List Reversal
Modular Programming in C
Menu-driven applications
👩‍💻 Author
Anjali Meda
📚 Project
Student Record Management System
Language: C
Data Structure: Singly Linked List
Project Type: Mini Project – II
