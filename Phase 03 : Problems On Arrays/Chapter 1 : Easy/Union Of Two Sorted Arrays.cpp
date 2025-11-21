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

/************************************************************
 * 🟢 Approach 2 — Optimal (Two Pointers on Sorted Arrays)
 *
 * 🔍 Intuition:
 * - Since both arrays are already sorted:
 *   - Use two pointers i, j for arr1 and arr2.
 *   - At each step, take the smaller of the two elements.
 *   - Avoid duplicates by only pushing when the current
 *     element is different from the last pushed element.
 * - After one array finishes, push the remaining unique
 *   elements from the other.
 *
 * ⚙️ Time Complexity:  O(n + m)
 * 💾 Space Complexity: O(n + m)  (for the union result)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int n = a.size(), m = b.size();
    int i = 0, j = 0;
    vector<int> uni;

    while (i < n && j < m) {
        int val;
        if (a[i] <= b[j]) {
            val = a[i];
            i++;
        } else {
            val = b[j];
            j++;
        }

        if (uni.empty() || uni.back() != val)
            uni.push_back(val);
    }

    // remaining elements in a
    while (i < n) {
        if (uni.empty() || uni.back() != a[i])
            uni.push_back(a[i]);
        i++;
    }

    // remaining elements in b
    while (j < m) {
        if (uni.empty() || uni.back() != b[j])
            uni.push_back(b[j]);
        j++;
    }

    return uni;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    vector<int> uni = findUnion(a, b);

    cout << "Union (Optimal): ";
    for (int x : uni) cout << x << " ";
    cout << endl;

    return 0;
}
