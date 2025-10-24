/************************************************************
 * 📘 Problem: Count Digits of a Number
 * ----------------------------------------------------------
 * Given an integer `n`, count the number of digits in it.
 *
 * Example:
 * Input: 12345
 * Output: 5
 *
 * Constraints:
 * n >= 0
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ==========================================================
   🔹 Function: countDigits
   ----------------------------------------------------------
   Intuition:
   - Extract digits one by one using modulo 10.
   - Count each digit until the number becomes 0.

   Example:
   n = 123
   1st iteration: lastDigit = 3, count = 1, n = 12
   2nd iteration: lastDigit = 2, count = 2, n = 1
   3rd iteration: lastDigit = 1, count = 3, n = 0
   Return 3

   Time Complexity:  O(log10(n))  → number of digits
   Space Complexity: O(1)
 ========================================================== */
int countDigits(int n) {
    int count = 0;

    while (n > 0) {
        int lastDigit = n % 10;  // extract the last digit
        count++;                  // increment digit count
        n = n / 10;               // remove the last digit
    }

    return count;
}

/* ==========================================================
   ✅ Main Function
 ========================================================== */
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of digits: " << countDigits(n) << "\n";

    return 0;
}
