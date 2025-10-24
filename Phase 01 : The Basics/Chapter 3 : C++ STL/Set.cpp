/************************************************************
 * 📘 Topic: Set, Multiset, Unordered Set in C++
 * ----------------------------------------------------------
 * STL containers to store unique (set) or multiple (multiset) elements.
 *
 * 🔹 set        → Stores unique elements in sorted order.
 * 🔹 multiset   → Stores multiple elements in sorted order.
 * 🔹 unordered_set → Stores unique elements with no specific order (hash-based).
 *
 * 🧠 Concepts Covered:
 * - insert(), erase(), find(), count()
 * - size(), empty()
 * - Iteration
 *
 * ⚙️ Time Complexity:
 * - set/multiset: insert/find/erase → O(log n)
 * - unordered_set: insert/find/erase → O(1) average, O(n) worst-case
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /*********************** ⚡ SET ************************/
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(20); // duplicate ignored
    s.emplace(30);

    cout << "Set elements: ";
    for (auto it : s) cout << it << " ";  // 10 20 30
    cout << "\n";

    cout << "Size of set: " << s.size() << "\n";
    cout << "Does set contain 20? " << (s.count(20) ? "Yes" : "No") << "\n";

    s.erase(20);
    cout << "After erasing 20: ";
    for (auto it : s) cout << it << " ";  // 10 30
    cout << "\n\n";


    /*********************** ⚡ MULTISET ************************/
    multiset<int> ms;

    ms.insert(10);
    ms.insert(20);
    ms.insert(20); // duplicate allowed
    ms.emplace(30);

    cout << "Multiset elements: ";
    for (auto it : ms) cout << it << " ";  // 10 20 20 30
    cout << "\n";

    cout << "Count of 20 in multiset: " << ms.count(20) << "\n";

    ms.erase(ms.find(20)); // erases only one occurrence
    cout << "After erasing one 20: ";
    for (auto it : ms) cout << it << " ";  // 10 20 30
    cout << "\n\n";


    /*********************** ⚡ UNORDERED SET ************************/
    unordered_set<int> us;

    us.insert(10);
    us.insert(20);
    us.insert(20); // duplicate ignored
    us.emplace(30);

    cout << "Unordered Set elements: ";
    for (auto it : us) cout << it << " "; // order may vary
    cout << "\n";

    cout << "Size of unordered_set: " << us.size() << "\n";
    cout << "Does unordered_set contain 20? " << (us.count(20) ? "Yes" : "No") << "\n";

    us.erase(20);
    cout << "After erasing 20: ";
    for (auto it : us) cout << it << " ";
    cout << "\n";

    return 0;
}