/************************************************************
 * 📘 CHAPTER 7 — Sorting Algorithms
 * ----------------------------------------------------------
 *
 * 🧩 Algorithm: Selection Sort
 * ----------------------------------------------------------
 * The Selection Sort algorithm divides the array into two parts:
 * - The **sorted part** (built from left to right)
 * - The **unsorted part**
 *
 * In each iteration:
 * - Find the smallest element in the unsorted portion
 * - Swap it with the first element of the unsorted portion
 *
 * This process continues until the entire array is sorted.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   🔹 FUNCTION: selectionSort()
   ----------------------------------------------------------
   🧠 Intuition:
   - For each position i, select the smallest element from
     the remaining unsorted portion (i+1 to n-1).
   - Swap that smallest element into position i.

   🔁 Steps:
   1️⃣ Start with i = 0 (first index)
   2️⃣ Find index of minimum element in [i ... n-1]
   3️⃣ Swap it with arr[i]
   4️⃣ Repeat until the array is sorted

   Example:
   Input:  [29, 10, 14, 37, 13]
   Step 1: Smallest from [0...4] = 10 → Swap → [10, 29, 14, 37, 13]
   Step 2: Smallest from [1...4] = 13 → Swap → [10, 13, 14, 37, 29]
   Step 3: Smallest from [2...4] = 14 → No change
   Step 4: Smallest from [3...4] = 29 → Swap → [10, 13, 14, 29, 37]
   Output: [10, 13, 14, 29, 37]

   🧮 Time Complexity:
   - Best Case: O(N²)
   - Average Case: O(N²)
   - Worst Case: O(N²)
     (Regardless of input, we always scan unsorted portion for min element)

   💾 Space Complexity: O(1)
   - In-place sorting, no extra memory used.

   ⚖️ Stability:
   - ❌ Not Stable (equal elements may change relative order)
   ---------------------------------------------------------- */
void selectionSort(vector<int> &arr) {
    int n = arr.size();

    // Outer loop: moves the boundary of the unsorted array
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // assume current element is minimum

        // Inner loop: find the actual minimum in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;  // update index if smaller element found
        }

        // Swap found minimum element with current element
        swap(arr[i], arr[minIndex]);
    }
}

/* ---------------------------------------------------------
   🧩 DRIVER CODE
   ----------------------------------------------------------
   Reads array input, performs selection sort, and prints
   the sorted result.
---------------------------------------------------------- */
int main() {
    int n;
    cin >> n;                           // number of elements
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];                  // input array elements

    selectionSort(arr);                 // sort array in-place

    cout << "Sorted Array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}