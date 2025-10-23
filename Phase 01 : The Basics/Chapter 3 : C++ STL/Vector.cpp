/************************************************************
 * 📘 Topic: Vectors in C++
 * ----------------------------------------------------------
 * This program demonstrates the use of the C++ STL `vector` 
 * container — covering creation, insertion, iteration, 
 * access, and modification operations.
 * 
 * 🧠 Concepts Covered:
 * - Vector Initialization
 * - push_back() & emplace_back()
 * - Copying and constructing vectors
 * - Iterators (begin, end, rbegin, rend)
 * - Element access ([], at(), back())
 * - Traversing vectors (iterator, auto, range-based loop)
 * - erase(), insert(), pop_back(), swap(), clear(), empty()
 * 
 * 🧩 Example Output (depends on demonstration order)
 * -------------------------------------------------
 * 2 100 100 300 10 10 50 50 ...
 * 
 * ⚙️ Time Complexity Notes:
 * - Access (operator[], at()): O(1)
 * - Insertion/Deletion at end: O(1) amortized
 * - Insertion/Deletion in middle: O(n)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /*********************** 🎯 Initialization ************************/
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // faster than push_back (constructs in place)

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);

    // Different ways of declaring vectors
    vector<int> a(5);              // size 5, all 0
    vector<int> b(5, 100);         // size 5, all 100
    vector<int> v1(5, 20);         // size 5, all 20
    vector<int> v2(v1);            // copy constructor

    /*********************** 🔍 Iterators ************************/
    vector<int>::iterator it = b.begin();
    it++;
    cout << *(it) << " "; // prints second element

    it = it + 2;
    cout << *(it) << " "; // prints fourth element

    // End iterators
    vector<int>::iterator itEnd = b.end();   // points after last element
    vector<int>::reverse_iterator itRend = b.rend();   // reverse end
    vector<int>::reverse_iterator itRbegin = b.rbegin(); // reverse begin

    /*********************** 🎯 Element Access ************************/
    cout << b[0] << " " << b.at(0) << "\n";
    cout << b.back() << "\n"; // last element

    /*********************** 🔁 Traversing Vector ************************/
    // 1️⃣ Using iterators
    for (vector<int>::iterator it = b.begin(); it != b.end(); it++)
        cout << *(it) << " ";
    cout << "\n";

    // 2️⃣ Using auto keyword
    for (auto it = b.begin(); it != b.end(); it++)
        cout << *(it) << " ";
    cout << "\n";

    // 3️⃣ Using range-based loop
    for (auto val : b)
        cout << val << " ";
    cout << "\n";

    /*********************** ✂️ Erase Elements ************************/
    // Erase single element
    b.erase(b.begin() + 1);

    // Erase range of elements
    if (b.size() >= 3)
        b.erase(b.begin() + 1, b.begin() + 3);

    /*********************** ➕ Insert Elements ************************/
    vector<int> c(2, 100);
    c.insert(c.begin(), 300);        // Insert 300 at start
    c.insert(c.begin() + 1, 2, 10);  // Insert two 10s after 300

    vector<int> copy(2, 50);
    c.insert(c.begin(), copy.begin(), copy.end()); // Insert vector range

    /*********************** 📏 Other Useful Operations ************************/
    cout << "Size: " << c.size() << "\n";

    c.pop_back(); // removes last element

    v1.swap(v2);  // swaps two vectors

    v.clear();    // removes all elements

    cout << "Is vector empty? " << v.empty() << "\n";

    return 0;
}
