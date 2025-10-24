#include <bits/stdc++.h>
using namespace std;

/*
 * Function: gcd
 * -------------
 * Uses Euclidean Algorithm to find GCD of two numbers.
 *
 * Formula:
 *   gcd(a, b) = gcd(b, a % b)
 *   Base case → when b == 0 → gcd = a
 *
 * Time Complexity: O(log(min(a, b)))
 * Example: gcd(48, 18) = 6
 */
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder step
        a = temp;   // swap step
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);
    return 0;
}
