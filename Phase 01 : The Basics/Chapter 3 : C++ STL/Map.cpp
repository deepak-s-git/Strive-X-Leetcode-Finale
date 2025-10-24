/************************************************************
 * 📘 Topic: Map, Multimap, Unordered Map in C++
 * ----------------------------------------------------------
 * These are associative containers that store elements as
 * key-value pairs (key → value).
 *
 * 🔹 map → Stores unique keys in sorted order (balanced BST).
 * 🔹 multimap → Allows duplicate keys (sorted order).
 * 🔹 unordered_map → Stores unique keys in no particular order (hashing).
 *
 * 🧠 Concepts Covered:
 * - insert(), emplace(), erase(), find(), count()
 * - access using [], iteration
 * - size(), empty()
 *
 * ⚙️ Time Complexity:
 * - map/multimap: insert/find/erase → O(log n)
 * - unordered_map: insert/find/erase → O(1) average, O(n) worst-case
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /*********************** ⚡ MAP ************************/
    map<int, string> m;

    m[1] = "One";
    m[2] = "Two";
    m.insert({3, "Three"});
    m.emplace(4, "Four");

    cout << "Map elements (sorted by key):\n";
    for (auto it : m)
        cout << it.first << " -> " << it.second << "\n";

    cout << "\nValue at key 2: " << m[2] << "\n";
    cout << "Count of key 3: " << m.count(3) << "\n";

    m.erase(3);
    cout << "After erasing key 3:\n";
    for (auto it : m)
        cout << it.first << " -> " << it.second << "\n";

    cout << "Size of map: " << m.size() << "\n";
    cout << "Is empty? " << (m.empty() ? "Yes" : "No") << "\n\n";


    /*********************** ⚡ MULTIMAP ************************/
    multimap<int, string> mm;

    mm.insert({1, "A"});
    mm.insert({2, "B"});
    mm.insert({2, "C"}); // duplicate key allowed
    mm.emplace(3, "D");

    cout << "Multimap elements (sorted by key):\n";
    for (auto it : mm)
        cout << it.first << " -> " << it.second << "\n";

    cout << "\nCount of key 2: " << mm.count(2) << "\n";

    // Erase one occurrence of key 2
    auto itr = mm.find(2);
    if (itr != mm.end())
        mm.erase(itr);

    cout << "After erasing one key 2:\n";
    for (auto it : mm)
        cout << it.first << " -> " << it.second << "\n";

    cout << "\n";


    /*********************** ⚡ UNORDERED MAP ************************/
    unordered_map<int, string> um;

    um[1] = "Red";
    um[2] = "Blue";
    um.insert({3, "Green"});
    um.emplace(4, "Yellow");

    cout << "Unordered Map elements (order may vary):\n";
    for (auto it : um)
        cout << it.first << " -> " << it.second << "\n";

    cout << "\nValue at key 3: " << um[3] << "\n";
    cout << "Size of unordered_map: " << um.size() << "\n";

    um.erase(2);
    cout << "After erasing key 2:\n";
    for (auto it : um)
        cout << it.first << " -> " << it.second << "\n";

    cout << "Is empty? " << (um.empty() ? "Yes" : "No") << "\n";

    return 0;
}
