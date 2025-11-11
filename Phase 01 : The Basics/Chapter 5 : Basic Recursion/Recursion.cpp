/************************************************************
 * 📘 CHAPTER 5 — Basic Recursion
 * ----------------------------------------------------------
 * This file covers the fundamentals of recursion in C++.
 * It demonstrates how recursive calls work through simple
 * examples: printing names, numbers (1→N, N→1), and using
 * backtracking to reverse order.
 *
 * 🧠 Concepts Covered:
 * - Base condition and recursive calls
 * - Printing sequences via recursion
 * - Backtracking concept (printing while returning)
 * - Stack memory visualization
 *
 * ----------------------------------------------------------
 * 🧩 Functions Included:
 * 1️⃣ printName() — Prints a given name N times
 * 2️⃣ print1toN() — Prints numbers from 1 to N (forward recursion)
 * 3️⃣ printNto1() — Prints numbers from N to 1 (forward recursion)
 * 4️⃣ print1toN_backtrack() — Prints 1 to N using backtracking
 * 5️⃣ printNto1_backtrack() — Prints N to 1 using backtracking
 ************************************************************/


/* ---------------------------------------------------------
   🟢 1. Print a Name N Times using Recursion
   ----------------------------------------------------------
   🔹 Problem: Print "Deepak" N times using recursion.
   🔹 Base Case: Stop when i > n.
   🔹 Recursive Step: Increment i after each print.
   🔹 Time Complexity: O(N)
   🔹 Space Complexity: O(N) (due to recursion stack)
   ---------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    if (i > n) return;                 // base case — stop when limit reached
    cout << "Deepak" << endl;          // work — print name
    printName(i + 1, n);               // recursive call
}

int main() {
    int n;
    cin >> n;
    printName(1, n);
    return 0;
}



/* ---------------------------------------------------------
   🟣 2. Print Numbers from 1 to N (Forward Recursion)
   ----------------------------------------------------------
   🔹 Idea: Print first number, then call for the next.
   🔹 Base Case: Stop when i > n.
   🔹 Example: Input 5 → Output: 1 2 3 4 5
   🔹 Time Complexity: O(N)
   🔹 Space Complexity: O(N)
   ---------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

void print1toN(int i, int n) {
    if (i > n) return;
    cout << i << " ";                  // print first
    print1toN(i + 1, n);               // recurse for next
}

int main() {
    int n;
    cin >> n;
    print1toN(1, n);
    return 0;
}



/* ---------------------------------------------------------
   🔵 3. Print Numbers from N to 1 (Forward Recursion)
   ----------------------------------------------------------
   🔹 Idea: Print current number, then recurse downwards.
   🔹 Base Case: Stop when n == 0.
   🔹 Example: Input 5 → Output: 5 4 3 2 1
   🔹 Time Complexity: O(N)
   🔹 Space Complexity: O(N)
   ---------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

void printNto1(int n) {
    if (n == 0) return;                // base case
    cout << n << " ";                  // print first
    printNto1(n - 1);                  // then recurse downwards
}

int main() {
    int n;
    cin >> n;
    printNto1(n);
    return 0;
}



/* ---------------------------------------------------------
   🟠 4. Print Numbers 1 to N using Backtracking
   ----------------------------------------------------------
   🔹 Idea: Go deep first, print while returning.
   🔹 Base Case: Stop when i < 1.
   🔹 Example: Input 5 → Output: 1 2 3 4 5
   🔹 Time Complexity: O(N)
   🔹 Space Complexity: O(N)
   ---------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

void print1toN_backtrack(int i, int n) {
    if (i < 1) return;                 // base condition
    print1toN_backtrack(i - 1, n);     // go till base first
    cout << i << " ";                  // print on the way back
}

int main() {
    int n;
    cin >> n;
    print1toN_backtrack(n, n);
    return 0;
}



/* ---------------------------------------------------------
   🔴 5. Print Numbers N to 1 using Backtracking
   ----------------------------------------------------------
   🔹 Idea: Go till end, print while coming back.
   🔹 Base Case: Stop when i > n.
   🔹 Example: Input 5 → Output: 5 4 3 2 1
   🔹 Time Complexity: O(N)
   🔹 Space Complexity: O(N)
   ---------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

void printNto1_backtrack(int i, int n) {
    if (i > n) return;                 // base condition
    printNto1_backtrack(i + 1, n);     // go deeper first
    cout << i << " ";                  // print while backtracking
}

int main() {
    int n;
    cin >> n;
    printNto1_backtrack(1, n);
    return 0;
}
