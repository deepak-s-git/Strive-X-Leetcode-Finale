/************************************************************
 * 📘 CHAPTER 5 — Basic Recursion (Part 2)
 * ----------------------------------------------------------
 * File: 02_Recursion_Sum_and_Factorial.cpp
 *
 * This file contains two small recursion examples:
 * 1) Parameterized recursive function that computes sum 1..N
 * 2) Functional recursion that returns factorial(N)
 ************************************************************/


/* ---------------------------------------------------------
   Program 1: Sum from 1 to N using a Parameterized Recursive Function
   ---------------------------------------------------------

   Problem:
   - Compute and print the sum of integers from 1 to N using recursion
     where the running sum is passed as a parameter.

   Example:
   Input: 5
   Output: Sum = 15

   Key idea (Intuition):
   - Use a parameter `sum` that accumulates the total while we
     move from i -> i+1 recursively (tail-recursive style).
   - When i > n (base case), print the accumulated sum.

   Base Case:
   - if (i > n) -> stop recursion and print `sum`.

   Recursive Step:
   - Call sumParameterized(i + 1, n, sum + i)

   Time Complexity: O(N) — function called once per i from 1..N
   Space Complexity: O(N) — recursion stack depth is O(N)

   Notes:
   - This is parameterized recursion (state passed via parameter).
   - Many compilers can optimize tail recursion, but C++ does not
     guarantee tail-call optimization; so worst-case stack usage is O(N).
---------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

void sumParameterized(int i, int n, int sum) {
    if (i > n) {
        cout << "Sum = " << sum << endl; // base case: print final sum
        return;
    }
    sumParameterized(i + 1, n, sum + i); // recursive call with updated sum
}

int main() {
    int n;
    cin >> n;
    sumParameterized(1, n, 0); // start from 1 with initial sum = 0
    return 0;
}



/* ---------------------------------------------------------
   Program 2: Factorial using Functional Recursion (Return-style)
   ---------------------------------------------------------

   Problem:
   - Compute factorial of n using recursion and return the value.

   Example:
   Input: 5
   Output: Factorial = 120

   Key idea (Intuition):
   - Factorial(n) = n * Factorial(n - 1)
   - Base case: Factorial(0) = 1 (or Factorial(1) = 1)

   Base Case:
   - if (n <= 1) return 1

   Recursive Step:
   - return n * factFunctional(n - 1)

   Time Complexity: O(N) — multiplies once per level from n down to 1
   Space Complexity: O(N) — recursion stack depth is O(N)

   Notes:
   - Use `long long` to hold larger factorial results, but be aware
     of overflow: factorial grows very quickly and will overflow
     typical integer types for moderate n (e.g., 20! fits in 64-bit).
---------------------------------------------------------- */

#include <bits/stdc++.h>
using namespace std;

long long factFunctional(int n) {
    if (n <= 1) return 1; // base case
    return n * factFunctional(n - 1); // recursive return
}

int main_fact() { // changed name to avoid duplicate `main` if compiled together
    int n;
    cin >> n;
    cout << "Factorial = " << factFunctional(n) << endl;
    return 0;
}