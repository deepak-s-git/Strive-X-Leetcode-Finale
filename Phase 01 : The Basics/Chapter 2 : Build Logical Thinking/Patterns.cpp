/*
---------------------------------------------
🧩 PATTERN PRACTICE SET - PHASE 1 (C++)
---------------------------------------------

This file includes explanations for several basic
pattern printing problems using nested loops.

Concepts Covered:
- Nested for loops
- Pattern logic (rows × columns)
- Handling spaces and numbers
---------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

// Global variable for consistency in some patterns
int n = 5;

int main() {

    /* ------------------------------------------------
       PATTERN 1: Solid Square
       Output:
       ****
       ****
       ****
       ****
       ------------------------------------------------ */
    for (int i = 0; i < 4; i++) {               // 4 rows
        for (int j = 0; j < 4; j++) {           // 4 columns
            cout << "*";                        // print star
        }
        cout << endl;                           // move to next line
    }

    cout << endl; // spacing between patterns


    /* ------------------------------------------------
       PATTERN 2: Right-Angled Triangle
       Output:
       *
       * *
       * * *
       * * * *
       * * * * *
       ------------------------------------------------ */
    for (int i = 0; i < 5; i++) {               // outer loop = rows
        for (int j = 0; j <= i; j++) {          // inner loop = stars per row
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;


    /* ------------------------------------------------
       PATTERN 3: Number Triangle (1 to i)
       Output:
       1
       1 2
       1 2 3
       1 2 3 4
       1 2 3 4 5
       ------------------------------------------------ */
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1 << " ";               // prints 1 to i+1
        }
        cout << endl;
    }

    cout << endl;


    /* ------------------------------------------------
       PATTERN 4: Repeating Row Numbers
       Output:
       1
       2 2
       3 3 3
       4 4 4 4
       5 5 5 5 5
       ------------------------------------------------ */
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1 << " ";               // prints same number = row index + 1
        }
        cout << endl;
    }

    cout << endl;


    /* ------------------------------------------------
       PATTERN 5: Inverted Right-Angled Triangle
       Output:
       * * * * *
       * * * *
       * * *
       * *
       *
       ------------------------------------------------ */
    for (int i = 0; i < n; i++) {               // rows = 5
        for (int j = 0; j < n - i; j++) {       // stars decrease every row
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;


    /* ------------------------------------------------
       PATTERN 6: Inverted Number Triangle
       Output:
       1 2 3 4 5
       1 2 3 4
       1 2 3
       1 2
       1
       ------------------------------------------------ */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    cout << endl;


    /* ------------------------------------------------
       PATTERN 7: Full Pyramid (Centered)
       Output:
           *    
          ***   
         *****  
        ******* 
       *********
       ------------------------------------------------ */
    for (int i = 0; i < n; i++) {
        // print spaces on left
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // spaces on right (optional, for symmetry)
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;


    /* ------------------------------------------------
       PATTERN 8: Inverted Full Pyramid
       Output:
       *********
        *******
         *****
          ***
           *
       ------------------------------------------------ */
    for (int i = 0; i < n; i++) {
        // left spaces increase each row
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // stars decrease each row
        for (int j = 0; j < (2 * (n - i) - 1); j++) {
            cout << "*";
        }
        // right spaces (optional)
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}