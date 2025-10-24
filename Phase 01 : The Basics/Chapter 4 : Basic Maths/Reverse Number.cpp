/************************************************************
 * 📘 Problem: Reverse a Number
 * ----------------------------------------------------------
 * Given an integer n, print its digits in reverse order.
 *
 * Example:
 * Input  → 1234
 * Output → 4321
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ==========================================================
   🔹 Function: reverseNumber
   ----------------------------------------------------------
   Logic:
   1️⃣ Extract the last digit using `n % 10`.
   2️⃣ Append it to the reversed number by `revNum * 10 + lastDigit`.
   3️⃣ Remove the last digit from n using `n / 10`.
   4️⃣ Repeat until n becomes 0.

   Example:
   n = 123
   → lastDigit = 3, revNum = 3
   → lastDigit = 2, revNum = 32
   → lastDigit = 1, revNum = 321
 ========================================================== */
int reverseNumber(int n) {
    int revNum = 0;

    while (n > 0) {
        int lastDigit = n % 10;         // Extract last digit
        revNum = (revNum * 10) + lastDigit; // Append to reversed number
        n = n / 10;                     // Remove last digit
    }

    return revNum;
}

/* ==========================================================
   ✅ Main Function
 ========================================================== */
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Reversed number: " << reverseNumber(n) << "\n";
    return 0;
}
