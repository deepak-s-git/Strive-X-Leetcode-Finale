/************************************************************
 * 📘 Problem: Check if a Number is an Armstrong Number
 * ----------------------------------------------------------
 * A number is called an Armstrong number if the sum of its
 * own digits each raised to the power of the number of digits
 * equals the original number.
 *
 * Example:
 * 153 → 1³ + 5³ + 3³ = 153  ✅ (Armstrong)
 * 123 → 1³ + 2³ + 3³ = 36   ❌ (Not Armstrong)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ==========================================================
   🔹 Function: countDigits
   ----------------------------------------------------------
   Counts the number of digits in the given number.
 ========================================================== */
int countDigits(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

/* ==========================================================
   🔹 Function: isArmstrong
   ----------------------------------------------------------
   Logic:
   1️⃣ Find the number of digits → say 'd'.
   2️⃣ For each digit:
       - Raise it to the power 'd' and add to sum.
   3️⃣ If sum == original number → Armstrong.
 ========================================================== */
bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = countDigits(n);

    while (n > 0) {
        int lastDigit = n % 10;
        sum += pow(lastDigit, digits);
        n /= 10;
    }

    return (sum == original);
}

/* ==========================================================
   ✅ Main Function
 ========================================================== */
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong Number \n";
    else
        cout << n << " is Not an Armstrong Number \n";

    return 0;
}
