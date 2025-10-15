/*
-----------------------------------------------------------
🧩 TOPIC: Conditional Statements in C++
📘 PHASE 1: Learn Basics (Syntax, Patterns, and Math)
-----------------------------------------------------------

We’ll learn:
- Syntax and usage of conditional statements
- How conditions are evaluated
- Examples with integers for simplicity
-----------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /* -----------------------------------------------------
    🟢 IF STATEMENT
    --------------------------------------------------------
    Syntax:
    if (condition) {
        // code executes only if condition is true
    }

    Example: Check if a number is positive
    ----------------------------------------------------- */

    int num1 = 5;

    if (num1 > 0) {
        cout << "num1 is positive" << endl;
    }
    // If num1 <= 0, nothing will be printed



    /* -----------------------------------------------------
    🟣 IF-ELSE STATEMENT
    --------------------------------------------------------
    Syntax:
    if (condition) {
        // executes if true
    } else {
        // executes if false
    }

    Example: Check if a number is even or odd
    ----------------------------------------------------- */

    int num2;
    cout << "Enter a number to check even/odd: ";
    cin >> num2;

    if (num2 % 2 == 0) {
        cout << num2 << " is even" << endl;
    } else {
        cout << num2 << " is odd" << endl;
    }



    /* -----------------------------------------------------
    🔵 ELSE-IF LADDER
    --------------------------------------------------------
    Syntax:
    if (condition1) {
        // executes if condition1 true
    } else if (condition2) {
        // executes if condition2 true
    } else {
        // executes if all above are false
    }

    Example: Grade calculation
    ----------------------------------------------------- */

    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B+" << endl;
    } else if (marks >= 60) {
        cout << "Grade: B" << endl;
    } else if (marks >= 50) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }



    /* -----------------------------------------------------
    🧠 SUMMARY
    --------------------------------------------------------
    - Use `if` when you want to check a single condition
    - Use `if-else` when there are 2 possible paths
    - Use `else-if` ladder for multiple conditions
    - Conditions are checked from top to bottom
    ----------------------------------------------------- */

    return 0;
}
