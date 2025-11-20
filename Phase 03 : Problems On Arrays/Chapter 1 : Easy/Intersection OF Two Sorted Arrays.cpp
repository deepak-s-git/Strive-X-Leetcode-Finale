/************************************************************
 * 🟢 Approach 2 — Optimal (Two Pointer Technique)
 *
 * 🔍 Intuition:
 * - Both arrays are sorted.
 * - Use two pointers i, j.
 *   - If a[i] == b[j] → add to answer, move both.
 *   - If a[i] < b[j] → move i.
 *   - If a[i] > b[j] → move j.
 * - Avoid duplicates by checking previous element.
 *
 * ⚙️ Time Complexity:  O(n + m)
 * 💾 Space Complexity: O(1) extra (excluding output)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &a, vector<int> &b) {
    int i = 0, j = 0;
    int n = a.size(), m = b.size();
    vector<int> inter;

    while(i < n && j < m) {
        if(a[i] == b[j]) {
            inter.push_back(a[i]);
            i++; 
            j++;
        }
        else if(a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return inter;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    vector<int> inter = findIntersection(a, b);

    cout << "Intersection (Optimal): ";
    for(int x : inter) cout << x << " ";
    cout << endl;

    return 0;
}
