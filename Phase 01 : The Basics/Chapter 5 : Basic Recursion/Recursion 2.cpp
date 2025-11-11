/************************************************************
 * 📘 CHAPTER 5 — Basic Recursion (Part 3)
 * ----------------------------------------------------------
 * File: 03_Recursion_Array_String_Fib.cpp
 *
 * Programs included (with explanations):
 * 1) reverseArray(...) -> reverse an array in-place using recursion
 * 2) isPalindrome(...) -> check if a string is palindrome using recursion
 * 3) fib(...) -> naive recursive Fibonacci
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   Program 1: Reverse Array using Recursion (In-place)
   ---------------------------------------------------------
   Problem:
     Reverse an integer array/vector in-place using recursion.

   Intuition:
     Swap elements at two pointers (l and r), then move pointers inward:
       swap(arr[l], arr[r]);
       recurse with l+1, r-1
     Stop when l >= r (middle reached).

   Base Case:
     if (l >= r) return;

   Example:
     Input:  1 2 3 4 5
     Output: 5 4 3 2 1

   Time Complexity: O(n) — each index participates in at most one swap
   Space Complexity: O(n) — recursion depth is ~n/2, i.e. O(n) stack frames
   --------------------------------------------------------- */
void reverseArray(vector<int> &arr, int l, int r) {
    if (l >= r) return;            // base condition: crossed or met in middle
    swap(arr[l], arr[r]);          // swap current pair
    reverseArray(arr, l + 1, r - 1); // recurse inward
}

// Keep this as the primary main() for this combined file.
// If you split files, keep this main in the reverse-array file only.
int main() {
    int n;
    cin >> n;                      // read size
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverseArray(arr, 0, n - 1);   // reverse in-place

    cout << "Reversed Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}

/* ---------------------------------------------------------
   Program 2: Palindrome Check using Recursion (Two-pointer)
   ---------------------------------------------------------
   Problem:
     Check if a string is a palindrome using recursion (compare ends).

   Intuition:
     Compare s[l] and s[r]. If they differ → not palindrome.
     Otherwise recurse on inner substring (l+1, r-1).
     If l >= r, we've checked all pairs and it's a palindrome.

   Base Case:
     if (l >= r) return true;

   Example:
     Input: "radar" → true
     Input: "hello" → false

   Time Complexity: O(n) — each character compared once
   Space Complexity: O(n) — recursion depth ~ n/2 → O(n) stack
   --------------------------------------------------------- */
bool isPalindrome(string &s, int l, int r) {
    if (l >= r) return true;           // base case: checked all pairs
    if (s[l] != s[r]) return false;    // mismatch → not palindrome
    return isPalindrome(s, l + 1, r - 1); // recurse inward
}

// Renamed main to avoid duplicate entry points in this combined file.
// To run this program alone, rename main_palindrome() -> main() or split file.
int main_palindrome() {
    string s;
    cin >> s;
    if (isPalindrome(s, 0, (int)s.size() - 1))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}

/* ---------------------------------------------------------
   Program 3: Naive Recursive Fibonacci
   ---------------------------------------------------------
   Problem:
     Compute fibonacci(n) using the definition:
       fib(0) = 0, fib(1) = 1
       fib(n) = fib(n-1) + fib(n-2)

   Intuition:
     Direct recursive expansion follows the mathematical recurrence.
     This is easy to write, but causes a lot of repeated work.

   Base Cases:
     if (n <= 1) return n;

   Example:
     Input: 5 → fib(5) = 5

   Time Complexity: O(2^n) — exponential, due to repeated subproblems
   Space Complexity: O(n) — recursion depth up to n

   Notes & Recommendation:
   - This naive approach is fine for small n (e.g., n <= 30).
   - For larger n, use memoization (DP) to get O(n) time, or
     iterative methods to reduce stack usage.
   --------------------------------------------------------- */
int fib(int n) {
    if (n <= 1) return n; // base cases: fib(0)=0, fib(1)=1
    return fib(n - 1) + fib(n - 2); // recursive expansion
}

// Renamed main to avoid duplicate entry points in this combined file.
// To run this program alone, rename main_fib() -> main() or split file.
int main_fib() {
    int n;
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}

/*