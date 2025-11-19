/************************************************************
 * 🧩 Problem: Remove Duplicates From Sorted Array
 *
 * ----------------------------------------------------------
 * Given a *sorted* array, remove duplicates and return the
 * new length of the array after removing duplicates.
 *
 * Example:
 *   Input:  [1, 1, 2, 2, 2, 3, 4, 4]
 *   Output: 4   (unique elements: 1, 2, 3, 4)
 *
 ************************************************************/


/************************************************************
 * 🟠 Approach 1 — Brute Force (Using Set)
 *
 * 🔍 Intuition:
 * - Insert all elements into a set (which stores unique items).
 * - Copy back into the array.
 *
 * ⚙️ Time Complexity:  O(n log n)
 * 💾 Space Complexity: O(n)
 ************************************************************/

#include <iostream>
#include <set>
using namespace std;

int removeDuplicates(int arr[], int n) {
    set<int> st;

    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    int idx = 0;
    for (auto x : st) {
        arr[idx++] = x;
    }

    return st.size();  // number of unique elements
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicates(arr, n);

    cout << "Unique Count (Brute): " << k << endl;
    cout << "Array: ";
    for (int i = 0; i < k; i++) cout << arr[i] << " ";
    return 0;
}

/************************************************************
 * 🟢 Approach 2 — Optimal (Two Pointer Technique)
 *
 * 🔍 Intuition:
 * - Since array is sorted, duplicates are adjacent.
 * - Maintain two pointers:
 *      i → last index of unique part
 *      j → current scanning index
 * - Whenever arr[j] != arr[i], increment i and replace.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int i = 0;  // pointer for unique elements

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;   // length of unique elements
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicates(arr, n);

    cout << "Unique Count (Optimal): " << k << endl;
    cout << "Array: ";
    for (int i = 0; i < k; i++) cout << arr[i] << " ";
    return 0;
}
