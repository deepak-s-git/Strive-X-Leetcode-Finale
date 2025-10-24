#include <bits/stdc++.h>
using namespace std;

/*
 * Function: isPrime
 * -----------------
 * Optimized prime check using square root logic.
 *
 * If 'n' is divisible by any number between 2 and √n,
 * then it’s not a prime number.
 *
 * Time Complexity: O(√n)
 * Example: n = 29 → Output: Prime
 */
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime

    // Only check till square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false; // divisor found → not prime
    }

    return true; // no divisors found → prime
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a Prime number.";
    else
        cout << n << " is NOT a Prime number.";

    return 0;
}
