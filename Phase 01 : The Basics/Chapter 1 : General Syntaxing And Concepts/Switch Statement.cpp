/*
-----------------------------------------------------------
🧩 TOPIC: Switch Statement in C++
📘 PHASE 1: Learn Basics (Syntax, Patterns, and Math)
-----------------------------------------------------------


We’ll learn:
- How switch works as an alternative to multiple else-if
- When to use break to avoid "fall-through"
- Using default for unmatched cases
-----------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /* -----------------------------------------------------
    🟢 SWITCH STATEMENT BASICS
    --------------------------------------------------------
    Syntax:
    switch (expression) {
        case value1:
            // code executes if expression == value1
            break;
        case value2:
            // code executes if expression == value2
            break;
        ...
        default:
            // executes if no case matches
    }

    Notes:
    - `expression` must be an integer, char, or enum type
    - `break` prevents falling through to next case
    ----------------------------------------------------- */

    int day;
    cout << "Enter a number (1-7) to get day of the week: ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter 1-7." << endl;
    }

    /* -----------------------------------------------------
    🔵 KEY POINTS TO REMEMBER
    --------------------------------------------------------
    1. switch is cleaner than multiple else-if when checking 
       equality of one variable against constants.
    2. Use `break` to avoid executing subsequent cases.
    3. `default` executes when none of the cases match.
    4. Expression must be integer, char, or enum type.
    ----------------------------------------------------- */

    return 0;
}
