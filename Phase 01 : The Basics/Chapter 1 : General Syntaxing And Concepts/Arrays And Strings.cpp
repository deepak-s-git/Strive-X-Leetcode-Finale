/*
-----------------------------------------------------------
🧩 TOPIC: Basic Arrays and String Indexing in C++
📘 PHASE 1: Learn Basics (Syntax, Patterns, and Math)
-----------------------------------------------------------


We’ll learn:
- Syntax for arrays and strings
- How indexing starts at 0
- Using loops to traverse arrays and strings
-----------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /* -----------------------------------------------------
    🟢 ARRAYS BASICS
    --------------------------------------------------------
    - An array stores multiple elements of the same type.
    - Indexing starts at 0 (first element is arr[0]).
    - Syntax: type arrayName[size] = {val1, val2, ...};

    Example: Integer array of size 5
    ----------------------------------------------------- */
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    cout << endl;

    /* -----------------------------------------------------
    🟣 ACCESSING & MODIFYING ARRAY ELEMENTS
    --------------------------------------------------------
    - Access using index: arr[index]
    - Modify using assignment: arr[index] = newValue
    ----------------------------------------------------- */
    arr[2] = 100; // change 3rd element
    cout << "After modification, arr[2] = " << arr[2] << endl << endl;



    /* -----------------------------------------------------
    🔵 STRINGS BASICS
    --------------------------------------------------------
    - A string is a sequence of characters.
    - Indexing starts at 0, like arrays.
    - Strings can be modified if using std::string

    Syntax:
    string s = "Hello";
    ----------------------------------------------------- */
    string s = "Hello";

    cout << "String s = " << s << endl;
    cout << "Characters in s:" << endl;
    for (int i = 0; i < s.length(); i++) {
        cout << "s[" << i << "] = " << s[i] << endl;
    }
    cout << endl;

    /* -----------------------------------------------------
    🟠 MODIFYING STRING ELEMENTS
    --------------------------------------------------------
    - Strings are mutable in C++ (std::string)
    - Example: change 1st character
    ----------------------------------------------------- */
    s[0] = 'Y';
    cout << "After modification, s = " << s << endl << endl;



    /* -----------------------------------------------------
    🧠 SUMMARY
    --------------------------------------------------------
    1. Arrays and strings use **0-based indexing**.
    2. Access elements using square brackets: arr[i], s[i]
    3. Arrays store elements of same type, strings store characters.
    4. Loops are used to iterate and manipulate elements.
    ----------------------------------------------------- */

    return 0;
}
