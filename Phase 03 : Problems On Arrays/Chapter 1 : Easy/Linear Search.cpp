/************************************************************
 * 🧩 Problem: Linear Search in an Array
 *
 * ----------------------------------------------------------
 * Given an array and a target value, return the index of the
 * target if found, else return -1.
 *
 * Example:
 *   Input:  arr = [4, 2, 9, 1], target = 9
 *   Output: 2
 *
 ************************************************************/


/************************************************************
 * 🟢 Approach — Linear Scan
 *
 * 🔍 Intuition:
 * - Traverse the array from left to right.
 * - Compare each element with the target.
 * - If match found → return index.
 * - If no match till end → return -1.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> target;

    int index = linearSearch(arr, target);

    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
