/************************************************************
 * 📘 Phase 2 — Sorting (Part 2)
 * File : 04_Merge_Sort.cpp
 *
 * Algorithm: Merge Sort (Divide & Conquer)
 *
 * Overview / Intuition:
 * - Merge Sort is a classic divide-and-conquer sorting algorithm.
 * - It divides the array into two halves, recursively sorts each half,
 *   and then merges the two sorted halves into one sorted array.
 * - The "merge" step is the heart of the algorithm: it repeatedly
 *   picks the smaller element from the front of the two halves.
 *
 * Key Properties:
 * - Time Complexity: O(n log n) for best, average and worst cases.
 *   - log n levels of recursion (divide step)
 *   - O(n) work per level to merge
 * - Space Complexity: O(n) extra space (for the temporary array used during merge).
 * - Stability: Stable (equal elements retain their original relative order)
 * - In-place: Not strictly in-place (needs O(n) extra temporary storage)
 *
 * When to use:
 * - Use when stable sorting and guaranteed O(n log n) time are required.
 * - Good for large datasets where worst-case guarantees matter.
 *
 * Notes:
 * - This implementation uses a temporary vector inside mergeArray — simple and clear.
 * - There are in-place variants and bottom-up (iterative) merge sort variants, but
 *   they are more complex or still require extra memory.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   mergeArray(arr, left, mid, right)
   - Merges two sorted subarrays:
     arr[left..mid] and arr[mid+1..right]
   - Produces a sorted sequence in arr[left..right]
   - Uses a temporary vector `temp` to hold merged results
   --------------------------------------------------------- */
void mergeArray(vector<int> &arr, int left, int mid, int right) {
    vector<int> temp;
    temp.reserve(right - left + 1); // reserve space to avoid repeated reallocations

    int i = left;      // pointer for left half (left..mid)
    int j = mid + 1;   // pointer for right half (mid+1..right)

    // Merge the two halves by always taking the smaller front element
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {    // <= keeps stability for equal elements
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy any remaining elements from left half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy any remaining elements from right half
    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy merged (sorted) elements back into original array segment
    for (int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }
}

/* ---------------------------------------------------------
   mergeSort(arr, left, right)
   - Standard recursive merge sort
   - Base case: a single element (left >= right) is already sorted
   - Recursively sort left half and right half, then merge
   --------------------------------------------------------- */
void mergeSort(vector<int> &arr, int left, int right) {
    if (left >= right) return;   // base case: 0 or 1 element

    int mid = left + (right - left) / 2;

    // Sort left half
    mergeSort(arr, left, mid);

    // Sort right half
    mergeSort(arr, mid + 1, right);

    // Merge sorted halves
    mergeArray(arr, left, mid, right);
}

/* ---------------------------------------------------------
   DRIVER CODE
   - Reads n and then n integers
   - Calls mergeSort on the full array and prints the sorted array
   --------------------------------------------------------- */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0; // safe read

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int x : arr)
        cout << x << " ";
    cout << "\n";

    return 0;
}

/************************************************************
 * Complexity Recap:
 * - Time: O(n log n)
 * - Space: O(n) extra
 * - Stable: Yes (this implementation preserves order of equal elements)
 *
 * Tips:
 * - For very large inputs where memory is constrained, consider
 *   in-place variants or use algorithms like QuickSort (careful with worst-case)
 *   or hybrid sorts (e.g., TimSort) depending on requirements.
 ************************************************************/
