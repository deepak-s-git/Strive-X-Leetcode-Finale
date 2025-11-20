/************************************************************
 * 🧩 Problem: Union of Two Sorted Arrays
 *
 * ----------------------------------------------------------
 * Given two **sorted** arrays, return their union as a list
 * of unique elements in sorted order.
 *
 * Example:
 *   Input:
 *     arr1 = [1, 2, 2, 3, 5]
 *     arr2 = [2, 3, 4, 4, 6]
 *   Output:
 *     [1, 2, 3, 4, 5, 6]
 *
 ************************************************************/


/************************************************************
 * 🟠 Approach 1 — Brute Force (Using Set)
 *
 * 🔍 Intuition:
 * - Insert all elements from both arrays into a set
 *   (set automatically keeps elements sorted & unique).
 * - Store the set elements into a result array/vector.
 *
 * ⚙️ Time Complexity:  O((n + m) · log(n + m))
 * 💾 Space Complexity: O(n + m)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    set<int> st;  // stores unique sorted values

    for (int x : a) st.insert(x);
    for (int x : b) st.insert(x);

    vector<int> uni;
    for (int x : st) uni.push_back(x);

    return uni;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    vector<int> uni = findUnion(a, b);

    cout << "Union (Brute): ";
    for (int x : uni) cout << x << " ";
    cout << endl;

    return 0;
}
