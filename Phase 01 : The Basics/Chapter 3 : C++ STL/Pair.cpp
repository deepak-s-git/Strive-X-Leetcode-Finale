/*
--------------------------------------------
🧩 Problem: Understanding Pairs in C++ STL
--------------------------------------------

📝 Description:
In C++, a pair is a simple container that can store two heterogeneous values as a single unit.
It is defined in the <utility> header and is commonly used in STL for storing key-value pairs,
coordinates, or associative relationships.

Pairs can also be nested, forming hierarchical data structures, and arrays of pairs are
commonly used in sorting and mapping problems.

--------------------------------------------
🎯 Example:
Input:  (Demonstration through code)
Output:
1 3
1 3 4
4

--------------------------------------------
📚 Explanation:
- `pair<int, int>` stores two integers.
- `pair<int, pair<int,int>>` is a nested pair.
- Arrays of pairs allow indexed access to pair elements.

--------------------------------------------
⏱️ Time Complexity: O(1)
💾 Space Complexity: O(1)
--------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

// 🧠 Function to explain usage of pairs
void explainPair() {

    // 1️⃣ Simple pair
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    // 2️⃣ Nested pair
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // 3️⃣ Array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl; // Accessing element (3,4) → prints 4
}

// 🚀 Driver code
int main() {
    explainPair();
    return 0;
}
