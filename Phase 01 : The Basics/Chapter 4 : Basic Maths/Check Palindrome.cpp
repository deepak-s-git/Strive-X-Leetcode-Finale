/************************************************************
 * 📘 Problem: Check if a Number is Palindrome
 * ----------------------------------------------------------
 * A number is called a palindrome if it reads the same
 * forward and backward.
 *
 * Example:
 * Input  → 121
 * Output → Palindrome
 *
 * Input  → 123
 * Output → Not a Palindrome
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ==========================================================
   🔹 Function: reverseNumber
   ----------------------------------------------------------
   Reverses the digits of the given number.
 ========================================================== */
int reverseNumber(int n) {
    int revNum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    return revNum;
}

/* ==========================================================
   🔹 Function: isPalindrome
   ----------------------------------------------------------
   Logic:
   1️⃣ Store the original number.
   2️⃣ Reverse the number using reverseNumber().
   3️⃣ Compare both:
       - If same → Palindrome
       - Else → Not a Palindrome
 ========================================================== */
bool isPalindrome(int n) {
    if (n < 0) return false; // Negative numbers aren't palindromes
    int original = n;
    int reversed = reverseNumber(n);
    return (original == reversed);
}

/* ==========================================================
   ✅ Main Function
 ========================================================== */
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << n << " is a Palindrome Number \n";
    else
        cout << n << " is Not a Palindrome \n";

    return 0;
}
