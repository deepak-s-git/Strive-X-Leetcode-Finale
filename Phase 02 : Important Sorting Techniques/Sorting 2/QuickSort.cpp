/************************************************************
 * 📘 Phase 2 — Sorting (Part 2)
 *
 * Algorithm: Quick Sort (Divide & Conquer)
 *
 * Overview / Intuition:
 * - Quick Sort works by selecting a **pivot** element from the array
 *   and partitioning the array into two parts:
 *      🔹 Left part  → elements ≤ pivot
 *      🔹 Right part → elements > pivot
 *
 * - After partitioning, the pivot is at its correct sorted position.
 * - Recursively apply the same process on left and right subarrays.
 *
 * Key Insight:
 * - Correct ordering happens during **partition step**, not after recursion.
 *
 * Partition Strategy Used:
 * - Lomuto Partition Scheme:
 *      - Pivot = last element
 *      - `i` tracks boundary of elements ≤ pivot
 *      - Swap elements forward if they are ≤ pivot
 *
 * Time Complexity:
 * - Best Case: O(n log n)
 * - Average Case: O(n log n)
 * - Worst Case: O(n²) → occurs when pivot is always smallest/largest
 *
 * Space Complexity:
 * - O(log n) average recursion depth
 * - O(n) worst case recursion depth
 *
 * Stability:
 * - ❌ Not stable — equal elements can change relative order
 *
 * Benefits:
 * - Fast in practice (often faster than Merge Sort)
 * - In-place sorting (no extra array needed)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   partitionArray(arr, low, high)
   - Places pivot at its correct position
   - Elements ≤ pivot are moved to left side
   - Elements > pivot go to right side
   - Returns final index of pivot
   --------------------------------------------------------- */
int partitionArray(vector<int> &arr, int low, int high) {
    int pivot = arr[high];   // pivot chosen as last element
    int i = low - 1;         // boundary for elements ≤ pivot

    // Traverse and move elements ≤ pivot to front region
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot after the last smaller element
    swap(arr[i + 1], arr[high]);
    return i + 1;  // new pivot index
}

/* ---------------------------------------------------------
   quickSort(arr, low, high)
   - Recursively sorts left and right partitions
   - Base case: when low >= high (0 or 1 element)
   --------------------------------------------------------- */
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {

        // Partition → pivot placed correctly
        int pi = partitionArray(arr, low, high);

        // Recursively sort left and right of pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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

    quickSort(arr, 0, n - 1);

    cout << "Quick Sorted Array: ";
    for (int x : arr)
        cout << x << " ";
    cout << "\n";

    return 0;
}