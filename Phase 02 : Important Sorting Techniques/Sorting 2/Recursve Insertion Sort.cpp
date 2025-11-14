/************************************************************
 * 📘 Phase 2 — Sorting (Part 2)
 *
 * Algorithm: Recursive Insertion Sort
 *
 * Overview / Intuition:
 * - This is the recursive form of Insertion Sort.
 * - The algorithm works by:
 *      1️⃣ Recursively sorting the first (n-1) elements
 *      2️⃣ Inserting the nth (last) element into its correct
 *         position in the sorted subarray
 *
 * Why this works:
 * - Recursion breaks the array into smaller parts until only 1
 *   element remains (already sorted).
 * - As recursion unwinds, each element is inserted in order,
 *   building the sorted array from smaller to larger problems.
 *
 * Key Observations:
 * - The "core" insertion logic remains identical to the
 *   iterative version, except recursion handles the outer loop.
 *
 * Time Complexity:
 * - Worst / Average / Best Case: O(n²)
 *   (Each insertion takes O(n), repeated n times)
 *
 * Space Complexity:
 * - O(n) recursion stack space
 *
 * Stability:
 * - ✅ Stable — equal elements preserve their relative order
 *
 * When to use:
 * - For small or nearly sorted arrays.
 * - Good for understanding recursion applied to sorting.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   insertionSortRecursive(arr, n)
   - Recursively sorts the first n-1 elements
   - Inserts arr[n-1] into correct position in sorted part
   --------------------------------------------------------- */
void insertionSortRecursive(vector<int> &arr, int n) {
    if (n <= 1) return;  // base case: array of size 1 is sorted

    // Recursively sort the first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert the last element in the correct position
    int last = arr[n - 1];
    int j = n - 2;

    // Shift elements that are greater than 'last'
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    // Place the element at its position
    arr[j + 1] = last;
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

    insertionSortRecursive(arr, n);

    cout << "Recursive Insertion Sorted: ";
    for (int x : arr)
        cout << " " << x;
    cout << "\n";

    return 0;
}