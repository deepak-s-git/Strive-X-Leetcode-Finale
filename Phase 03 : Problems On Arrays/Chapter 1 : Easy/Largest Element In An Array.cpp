/************************************************************
 * 🧩 Problem: Find the Largest Element in an Array
 *
 * ----------------------------------------------------------
 * Given an array of integers, return the largest element.
 *
 * Example:
 *   Input:  [12, 3, 5, 11, 45, 34]
 *   Output: 45
 *
 ************************************************************/


/************************************************************
 * 🟠 Approach 1 — Brute Force (Sorting Based)
 *
 * 🔍 Intuition:
 * - Sort the array in increasing order.
 * - Largest element will automatically be the last element.
 *
 * ⚙️ Time Complexity:  O(n log n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

int largest_bruteforce(int arr[], int n) {
    sort(arr, arr + n);        // sorts entire array
    return arr[n - 1];         // last element is largest
}

int main_brute() {
    int arr[] = {12, 3, 5, 11, 45, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest (Brute): " << largest_bruteforce(arr, n);
    return 0;
}


/************************************************************
 * 🟢 Approach 2 — Optimized (Single Pass)
 *
 * 🔍 Intuition:
 * - Maintain a variable storing the maximum.
 * - Traverse array once and update maximum whenever
 *   a larger element is found.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

int largest_optimized(int arr[], int n) {
    int largest = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = {12, 3, 11, 45, 34, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest (Optimized): " << largest_optimized(arr, n);
    return 0;
}
