/************************************************************
 * 🧩 Problem: Find the Second Largest Element in an Array
 *
 * ----------------------------------------------------------
 * Given an array of integers, return the second largest
 * distinct element.
 *
 * Example:
 *   Input:  [12, 3, 5, 11, 45, 34]
 *   Output: 34
 *
 ************************************************************/


/************************************************************
 * 🟠 Approach 1 — Brute Force (Sorting Based)
 *
 * 🔍 Intuition:
 * - Sort the array.
 * - Scan from the end until a value strictly smaller than
 *   the largest is found → that's the second largest.
 *
 * ⚙️ Time Complexity:  O(n log n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    sort(arr, arr + n);

    int largest = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest)
            return arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {12, 3, 5, 11, 45, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second Largest (Brute): " << secondLargest(arr, n);
    return 0;
}



/************************************************************
 * 🟡 Approach 2 — Better (Single Pass)
 *
 * 🔍 Intuition:
 * - Maintain `largest` and `secondLargest`.
 * - Update both while scanning.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int arr[] = {12, 3, 11, 45, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second Largest (Better): " << secondLargest(arr, n);
    return 0;
}



/************************************************************
 * 🟢 Approach 3 — Optimal (Cleanest Logic)
 *
 * 🔍 Intuition:
 * - If current > largest:
 *        secondLargest = largest
 *        largest = current
 * - Else if current > secondLargest and current != largest:
 *        secondLargest = current
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int arr[] = {12, 3, 11, 45, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second Largest (Optimal): " << secondLargest(arr, n);
    return 0;
}
