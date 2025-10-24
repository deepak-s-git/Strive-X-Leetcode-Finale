
Method 1 — Simple O(n) Approach

#include <bits/stdc++.h>
using namespace std;

/*
 * Function: printDivisors
 * ------------------------
 * Prints all divisors of a given number 'n'
 * using a simple loop from 1 to n.
 *
 * Time Complexity: O(n)
 * Example: n = 12 → Output: 1 2 3 4 6 12
 */
void printDivisors(int n) {
    cout << "Divisors of " << n << " are: ";

    // Check every number from 1 to n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)  // if 'i' divides 'n' perfectly
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    printDivisors(n);

    return 0;
}



Method 2 — Optimized O(√n) Approach

#include <bits/stdc++.h>
using namespace std;

/*
 * Function: printDivisors
 * ------------------------
 * Prints all divisors of a given number 'n'
 * using the mathematical property that if 'i' divides 'n',
 * then 'n / i' is also a divisor.
 *
 * Time Complexity: O(√n)
 * Example: n = 36 → Output: 1 2 3 4 6 9 12 18 36
 */
void printDivisors(int n) {
    vector<int> divisors;

    // Loop runs only till square root of n
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);       // first divisor
            if (i != n / i)              // avoid duplicates (e.g., for 25 → 5*5)
                divisors.push_back(n / i); // corresponding divisor
        }
    }

    // Sort to get divisors in ascending order
    sort(divisors.begin(), divisors.end());

    cout << "Divisors of " << n << " are: ";
    for (int d : divisors)
        cout << d << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    printDivisors(n);

    return 0;
}
