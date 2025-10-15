/*
-----------------------------------------------------------
🧩 TOPIC: Functions in C++
📘 PHASE 1: Learn Basics (Syntax, Patterns, and Math)
-----------------------------------------------------------

This file demonstrates:
1️⃣ Non-Parameterized Functions
2️⃣ Parameterized Functions
3️⃣ Pass by Value vs Pass by Reference

We’ll learn:
- How to declare and call functions
- How data is passed into functions
- Difference between pass by value and reference
-----------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;


/* -----------------------------------------------------
🟢 NON-PARAMETERIZED FUNCTION
--------------------------------------------------------
- A function that does not take any arguments
- Can return a value or be void
----------------------------------------------------- */
void greet() {
    cout << "Hello, Learner!" << endl;
}


/* -----------------------------------------------------
🟣 PARAMETERIZED FUNCTION
--------------------------------------------------------
- A function that takes arguments/parameters
- Can perform operations using those parameters
----------------------------------------------------- */
int add(int x, int y) {
    return x + y; // returns the sum of x and y
}


/* -----------------------------------------------------
🔵 PASS BY VALUE VS PASS BY REFERENCE
--------------------------------------------------------
1. Pass by Value:
   - Copies the actual value into the function parameter
   - Changes inside the function do NOT affect the original variable

2. Pass by Reference:
   - Passes the actual variable (using &)
   - Changes inside the function affect the original variable
----------------------------------------------------- */

// Pass by Value example
void incrementValue(int num) {
    num = num + 1; // only local copy changes
}

// Pass by Reference example
void incrementReference(int &num) {
    num = num + 1; // original variable is modified
}


int main() {

    /* -----------------------------------------------------
    Call Non-Parameterized Function
    ----------------------------------------------------- */
    greet();
    cout << endl;


    /* -----------------------------------------------------
    Call Parameterized Function
    ----------------------------------------------------- */
    int sum = add(10, 20); // pass 10 and 20 as parameters
    cout << "Sum = " << sum << endl << endl;


    /* -----------------------------------------------------
    Demonstrate Pass by Value
    ----------------------------------------------------- */
    int a = 5;
    cout << "Before incrementValue, a = " << a << endl;
    incrementValue(a);
    cout << "After incrementValue (Pass by Value), a = " << a << endl << endl;


    /* -----------------------------------------------------
    Demonstrate Pass by Reference
    ----------------------------------------------------- */
    int b = 5;
    cout << "Before incrementReference, b = " << b << endl;
    incrementReference(b);
    cout << "After incrementReference (Pass by Reference), b = " << b << endl << endl;


    /* -----------------------------------------------------
    🧠 SUMMARY
    --------------------------------------------------------
    1. Non-parameterized function → no arguments
    2. Parameterized function → takes input arguments
    3. Pass by Value → changes inside function do NOT affect original variable
    4. Pass by Reference → changes inside function DO affect original variable
    5. Use reference when you want the function to modify original data
    ----------------------------------------------------- */

    return 0;
}
