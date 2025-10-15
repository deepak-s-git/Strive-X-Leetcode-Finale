/*
-----------------------------------------------------------
🧩 TOPIC: Loops in C++
📘 PHASE 1: Learn Basics (Syntax, Patterns, and Math)
-----------------------------------------------------------

We’ll learn:
- Syntax and usage of different loops
- How they iterate over a range
- Differences between loops
-----------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /* -----------------------------------------------------
    🟢 FOR LOOP
    --------------------------------------------------------
    Syntax:
    for (initialization; condition; update) {
        // code to repeat
    }

    Example: Print numbers from 1 to 5
    ----------------------------------------------------- */
    cout << "For loop (1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl << endl;



    /* -----------------------------------------------------
    🟣 WHILE LOOP
    --------------------------------------------------------
    Syntax:
    while (condition) {
        // code to repeat
    }

    Example: Print numbers from 1 to 5
    ----------------------------------------------------- */
    cout << "While loop (1 to 5):" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++; // increment is necessary to avoid infinite loop
    }
    cout << endl << endl;



    /* -----------------------------------------------------
    🔵 DO-WHILE LOOP
    --------------------------------------------------------
    Syntax:
    do {
        // code to repeat
    } while (condition);

    Difference:
    - Executes the loop **at least once** even if condition is false

    Example: Print numbers from 1 to 5
    ----------------------------------------------------- */
    cout << "Do-while loop (1 to 5):" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl << endl;



    /* -----------------------------------------------------
    🧠 SUMMARY
    --------------------------------------------------------
    1. for loop → best when number of iterations is known
    2. while loop → executes while condition is true
    3. do-while loop → executes at least once, then checks condition
    4. Always ensure loop variable is updated to avoid infinite loops
    ----------------------------------------------------- */

    return 0;
}
