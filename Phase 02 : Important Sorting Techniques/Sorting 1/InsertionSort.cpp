/************************************************************
 * 📘 CHAPTER 7 — Sorting Algorithms
 * ----------------------------------------------------------
 *
 * 🧩 Algorithm: Insertion Sort
 * ----------------------------------------------------------
 * Insertion Sort builds the final sorted array one element
 * at a time, similar to how we sort playing cards in our hands.
 *
 * At each step, the current element (key) is inserted into
 * its correct position in the already sorted portion of the array.
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   🔹 FUNCTION: insertionSort()
   ----------------------------------------------------------
   🧠 Intuition:
   - Divide the array into two parts:
     1️⃣ Sorted part (left portion)
     2️⃣ Unsorted part (right portion)
   - Pick one element (the key) from the unsorted portion
     and insert it at the correct position in the sorted portion.

   🔁 Steps:
   1️⃣ Start from index 1 (first element is trivially sorted).
   2️⃣ Compare key with elements in the sorted part (arr[0..i-1]).
   3️⃣ Shift all greater elements one position to the right.
   4️⃣ Insert key in its correct position.

   🧩 Example:
   Input:  [8, 3, 5, 1, 4]
   Step 1: [3, 8, 5, 1, 4]
   Step 2: [3, 5, 8, 1, 4]
   Step 3: [1, 3, 5, 8, 4]
   Step 4: [1, 3, 4, 5, 8]
   Output: [1, 3, 4, 5, 8]

   🧮 Time Complexity:
   - Best Case (Already Sorted): O(N)
   - Average Case: O(N²)
   - Worst Case (Reverse Sorted): O(N²)

   💾 Space Complexity: O(1)
   - In-place sorting, no extra space required.

   ⚖️ Stability:
   - ✅ Stable (equal elements retain their order)

   🧠 Use Case:
   - Efficient for small arrays or nearly sorted data.
   ---------------------------------------------------------- */
void insertionSort(vector<int> &arr) {
    int n = arr.size();

    // Start from the second element (first is trivially sorted)
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // element to insert
        int j = i - 1;

        // Move elements greater than key one step ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place key in its correct sorted position
        arr[j + 1] = key;
    }
}

/* ---------------------------------------------------------
   🧩 DRIVER CODE
   ----------------------------------------------------------
   Reads array input, sorts it using Insertion Sort,
   and prints the sorted result.
---------------------------------------------------------- */
int main() {
    int n;
    cin >> n;                            // number of elements
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];                   // input array elements

    insertionSort(arr);                  // sort using insertion sort

    cout << "Sorted Array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}