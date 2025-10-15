/*
-----------------------------------------------------------
🧩 TOPIC: Data Types in C++
📘 PHASE 1: Learn Basics (Syntax, Patterns, and Math)
-----------------------------------------------------------

We’ll understand:
- How to declare and use each data type
- Their memory size and range
- Difference between string input methods
-----------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /* -----------------------------------------------------
    🟢 INTEGER TYPES: int, long, long long
    --------------------------------------------------------
    int → 4 bytes → range: -2,147,483,648 to 2,147,483,647
    long → usually same as int (4 bytes) in most compilers
    long long → 8 bytes → range: -9e18 to +9e18
    ----------------------------------------------------- */

    int a = 10;
    long b = 150000L;
    long long c = 9000000000000000000LL;

    cout << "int a = " << a << endl;
    cout << "long b = " << b << endl;
    cout << "long long c = " << c << endl << endl;



    /* -----------------------------------------------------
    🟣 FLOATING POINT TYPES: float, double
    --------------------------------------------------------
    float → 4 bytes → precision up to ~6 decimal places
    double → 8 bytes → precision up to ~15 decimal places
    ----------------------------------------------------- */

    float x = 3.14159f;
    double y = 3.141592653589793;

    cout << "float x = " << x << endl;
    cout << "double y = " << y << endl << endl;



    /* -----------------------------------------------------
    🔵 CHARACTER TYPE: char
    --------------------------------------------------------
    char → 1 byte → stores a single character in ASCII form
    ----------------------------------------------------- */

    char ch = 'A';
    cout << "Character ch = " << ch << endl;
    cout << "ASCII value of ch = " << (int)ch << endl << endl;



    /* -----------------------------------------------------
    🟠 STRING TYPE: string and getline()
    --------------------------------------------------------
    string → a sequence of characters (text)

    cin >> str → reads one word (stops at space)
    getline(cin, str) → reads the entire line (with spaces)
    ----------------------------------------------------- */

    string name1, name2;

    cout << "Enter a single word string: ";
    cin >> name1; // takes only one word
    cin.ignore(); // clears newline left in the input buffer

    cout << "Enter a full line string: ";
    getline(cin, name2); // takes a full line

    cout << "Single word: " << name1 << endl;
    cout << "Full line: " << name2 << endl << endl;

    return 0;
}


    /* -----------------------------------------------------
    🧮 SUMMARY TABLE
    --------------------------------------------------------
    | Data Type   | Size (bytes) | Typical Range               |
    |--------------|--------------|------------------------------|
    | int          | 4            | -2.1e9 to 2.1e9             |
    | long         | 4 or 8       | depends on compiler          |
    | long long    | 8            | -9e18 to 9e18                |
    | float        | 4            | ±3.4e38 (~6 decimal digits)  |
    | double       | 8            | ±1.7e308 (~15 decimal digits)|
    | char         | 1            | -128 to 127 or 0–255 (ASCII) |
    | string       | varies       | depends on length            |
    ----------------------------------------------------- */
