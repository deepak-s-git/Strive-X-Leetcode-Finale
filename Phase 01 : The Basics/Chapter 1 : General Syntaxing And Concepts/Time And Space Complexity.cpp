/*
-----------------------------------------------------------
🧩 TOPIC: Time and Space Complexity
📘 PHASE 1: Learn Basics (Syntax, Patterns, and Math)
-----------------------------------------------------------

We’ll learn:
- How to estimate how fast a program runs (Time Complexity)
- How much memory it uses (Space Complexity)
- Common Big-O notations with examples
- Why understanding complexity is important for problem solving
-----------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /* -----------------------------------------------------
    🟢 TIME COMPLEXITY
    --------------------------------------------------------
    Definition:
    - Time Complexity measures the number of **operations**
      a program performs relative to input size (n)
    - Expressed in **Big O notation**
    - Helps us **predict performance** for large inputs

    Common Types:
    - O(1)    → Constant time (does not grow with input)
    - O(n)    → Linear time (loops over n elements once)
    - O(n^2)  → Quadratic time (nested loops)
    - O(log n) → Logarithmic time (e.g., binary search)
    - O(n log n) → Linearithmic (e.g., merge sort)
    ----------------------------------------------------- */

    // Example 1: O(1) → Constant Time
    int a = 5, b = 10;
    int sum = a + b; // Only 1 operation
    cout << "Sum = " << sum << " → O(1) operation (constant time)" << endl << endl;

    // Example 2: O(n) → Linear Time
    cout << "Linear loop (O(n)) example:" << endl;
    int n = 5;
    for (int i = 0; i < n; i++) { // executes n times
        cout << i << " ";
    }
    cout << endl << endl;

    // Example 3: O(n^2) → Quadratic Time
    cout << "Nested loop (O(n^2)) example:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    cout << endl;

    // Example 4: O(log n) → Logarithmic Time (Binary Search Concept)
    cout << "Logarithmic example (O(log n)) conceptually:" << endl;
    int arrSorted[] = {1, 3, 5, 7, 9};
    int left = 0, right = 4, target = 7;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(arrSorted[mid] == target) break;
        else if(arrSorted[mid] < target) left = mid + 1;
        else right = mid - 1;
        // Each iteration halves the search space → O(log n)
    }
    cout << "Binary search completed (O(log n))" << endl << endl;

    // Example 5: O(n log n) → Linearithmic Time (Merge Sort Concept)
    cout << "Linearithmic example (O(n log n)) conceptually:" << endl;
    cout << "Sorting n elements using merge sort → O(n log n)" << endl << endl;



    /* -----------------------------------------------------
    🟣 SPACE COMPLEXITY
    --------------------------------------------------------
    Definition:
    - Space Complexity measures **extra memory** used relative to input size
    - Includes:
        - Variables
        - Arrays / data structures
        - Function call stack (recursion)
    - Also expressed in Big O

    Examples:
        int x;       → O(1) space
        int arr[n];  → O(n) space
        Recursive function with depth n → O(n) space
    ----------------------------------------------------- */

    int arr[n]; // linear space proportional to n
    cout << "Array of size n uses O(n) extra space" << endl;

    /* -----------------------------------------------------
    🔵 WHY IT MATTERS
    --------------------------------------------------------
    - Efficient algorithms save time and memory
    - Important in competitive programming and real-world apps
    - Always check loops, recursion, and data structures when estimating complexity
    ----------------------------------------------------- */

    /* -----------------------------------------------------
    🧠 SUMMARY OF COMMON COMPLEXITIES
    --------------------------------------------------------
    Time Complexity:
    - O(1)       → constant
    - O(n)       → linear
    - O(n^2)     → quadratic
    - O(log n)   → logarithmic
    - O(n log n) → linearithmic

    Space Complexity:
    - O(1) → constant memory
    - O(n) → memory grows linearly with input
    - O(n^2) → memory grows quadratically (2D arrays, matrices)

    Tips:
    - Count loops for time
    - Count extra variables/arrays/recursion stack for space
    ----------------------------------------------------- */

    return 0;
}
