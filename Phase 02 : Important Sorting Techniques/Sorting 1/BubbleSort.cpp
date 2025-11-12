/************************************************************
 * 📘 CHAPTER 7 — Sorting Algorithms
 * ----------------------------------------------------------
 *
 * 🧩 Algorithm: Bubble Sort
 * ----------------------------------------------------------
 * Bubble Sort is a simple comparison-based sorting algorithm.
 * It repeatedly steps through the list, compares adjacent
 * elements, and swaps them if they are in the wrong order.
 *
 * Each iteration "bubbles" the largest element to the end
 * of the unsorted portion of the array.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   🔹 FUNCTION: bubbleSort()
   ----------------------------------------------------------
   🧠 Intuition:
   - Compare adjacent elements one by one.
   - If current element > next element, swap them.
   - After the 1st pass, the largest element is at the end.
   - After each subsequent pass, the next largest element
     moves to its correct position.

   🔁 Steps:
   1️⃣ Iterate n-1 times (outer loop).
   2️⃣ Compare adjacent elements and swap if out of order.
   3️⃣ After i-th pass, last i elements are already sorted.
   4️⃣ If no swaps occur in a full pass, the array is already sorted.

   🧮 Example:
   Input:  [5, 1, 4, 2, 8]
   Pass 1: [1, 4, 2, 5, 8]
   Pass 2: [1, 2, 4, 5, 8]  (Sorted)

   🧩 Optimization:
   - Use a flag `swapped` to detect if the array is already sorted.
   - If no swaps occur in a pass → break early.

   🧮 Time Complexity:
   - Best Case (Already Sorted): O(N)
   - Average Case: O(N²)
   - Worst Case (Reverse Sorted): O(N²)

   💾 Space Complexity: O(1)
   - Sorting is done in-place (no extra memory).

   ⚖️ Stability:
   - ✅ Stable (equal elements retain their relative order)
   ---------------------------------------------------------- */
void bubbleSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // optimization flag

        // Inner loop: compare adjacent pairs
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; // mark that a swap occurred
            }
        }

        // 🔸 If no swaps happened, array is already sorted
        if (!swapped) break;
    }
}

/* ---------------------------------------------------------
   🧩 DRIVER CODE
   ----------------------------------------------------------
   Reads an array, performs bubble sort, and prints the
   sorted result.
---------------------------------------------------------- */
int main() {
    int n;
    cin >> n;                            // number of elements
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];                   // input array elements

    bubbleSort(arr);                     // sort array using bubble sort

    cout << "Sorted Array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}