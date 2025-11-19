/************************************************************
 * 🧩 Problem: Check if an Array is Sorted
 *
 * ----------------------------------------------------------
 * Given an array of integers, determine whether the array is
 * sorted in non-decreasing order.
 *
 * Example:
 *   Input:  [1, 2, 2, 5, 7]
 *   Output: Sorted
 *
 ************************************************************/


/************************************************************
 * 🟢 Approach — Single Pass Check
 *
 * 🔍 Intuition:
 * - Traverse the array and verify that every element
 *   is NOT smaller than its previous element.
 * - Condition:  arr[i] >= arr[i-1]
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])   // violation → not sorted
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n))
        cout << "Array is Sorted";
    else
        cout << "Array is NOT Sorted";

    return 0;
}
