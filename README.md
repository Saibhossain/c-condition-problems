# C Condition Problems

This repository contains solutions to **basic conditional problems in C**.  
The problems are taken from a set of exercises where only **single `*` difficulty** problems were solved.  
Each problem is implemented in a separate `.c` file.

---

## 📌 Problem List
- **1.c** → Check whether a number is positive or negative  
- **2.c** → Check whether a number is even or odd  
- **3.c** → Display a single digit in English  
- **4.c** → Check whether a triangle is valid based on its angles  
- **7.c** → Compare two numbers (greater, less, equal)  
- **8.c** → Check whether a year is a leap year  
- **9.c** → Categorize a character (alphabet, digit, special)  
- **11.c** → Find grade from marks  
- **12.c** → Menu-driven arithmetic operations  

---

## 📘 How Conditions Work in C

Conditions in C are built using **decision-making statements**. These allow a program to **take different paths based on logical checks**.

### 🔹 The `if` Statement
```c
if (condition) {
    // executes if condition is true
}
```

### 🔹 The if-else Statement
```c
if (condition) {
    // executes if condition is true
} else {
    // executes if condition is false
}
```

### 🔹 The if-else if-else Ladder
```c
if (condition1) {
    // executes if condition1 is true
} else if (condition2) {
    // executes if condition2 is true
} else {
    // executes if none are true
}
```
### 🔹 The switch Statement
```c
switch(choice) {
    case 1: printf("Case 1\n"); break;
    case 2: printf("Case 2\n"); break;
    default: printf("Invalid choice\n");
}
```
### ⚙️ Operators Used in Conditions
C supports relational and logical operators for conditions.
* Relational Operators
```
    == (equal to)
    != (not equal to)
    > (greater than)
    < (less than)
    >= (greater than or equal to)
    <= (less than or equal to)
```
* Logical Operators
```
    && (AND → true if both are true)
    || (OR → true if at least one is true)
    ! (NOT → reverses condition)
```
> Example:
```c
if (year % 4 == 0 && year % 100 != 0) {
    printf("Leap year\n");
}
```
### ▶️ How to Compile and Run
Each problem is in its own file (e.g., 1.c, 2.c, etc.).
1. Compile using GCC (or any C compiler):
```bash
gcc 1.c -o problem1
```
2. Run the executable:
```bash
./problem1
```
Repeat this for other files (2.c, 3.c, etc.).

### 📚 More Information
* These programs are focused on decision-making using if-else and switch.
* They are ideal for beginners learning C programming.

* Topics covered:
> Conditional statements (if, if-else, switch)
> Relational and logical operators
> Input/output handling in C
> Simple problem-solving

---
✨ This project is a small step into problem-solving with C conditions.
It can serve as a practice resource for beginners and students.



