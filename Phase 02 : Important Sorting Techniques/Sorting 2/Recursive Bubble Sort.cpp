/************************************************************
 * 📘 Phase 2 — Sorting (Part 2)
 *
 * Algorithm: Recursive Bubble Sort
 *
 * Overview / Intuition:
 * - This is the recursive variant of Bubble Sort.
 * - Instead of using two nested loops, we perform:
 *      1️⃣ One full pass of bubble operations (push largest to the end)
 *      2️⃣ Recursively call the function on the remaining (n−1) elements
 *
 * - It uses the natural reduction pattern of recursion where
 *   each recursive call solves a smaller version of the problem.
 *
 * Key Points:
 * - Base Case:
 *      n == 1 → single element is already sorted
 *
 * - Work in each call:
 *      Perform one bubble pass → O(n)
 *
 * - Reduction:
 *      Each recursive call reduces problem size by 1 → n → n-1 → n-2 → ... → 1
 *
 * Time Complexity:
 * - Worst / Average / Best Case: O(n²)
 *   Same as iterative bubble sort because:
 *     O(n) work per call × n calls = O(n²)
 *
 * Space Complexity:
 * - O(n) due to recursion stack
 *   (each recursive call stays on stack until all its child calls return)
 *
 * Stability:
 * - ✅ Stable — equal elements retain their relative order
 *
 * Notes:
 * - Functionally similar to iterative Bubble Sort, but uses recursion
 *   to reduce code structure.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   bubbleSortRecursive(arr, n)
   - Performs one bubble pass on arr[0..n-1]
   - Recursively sorts arr[0..n-2]
   --------------------------------------------------------- */
void bubbleSortRecursive(vector<int> &arr, int n) {
    if (n == 1) return;  // base case: one element = sorted

    // Perform one full bubble pass
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call on reduced array
    bubbleSortRecursive(arr, n - 1);
}

/* ---------------------------------------------------------
   DRIVER CODE
   --------------------------------------------------------- */
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSortRecursive(arr, n);

    cout << "Recursive Bubble Sorted: ";
    for (int x : arr)
        cout << x << " ";
    cout << "\n";

    return 0;
}