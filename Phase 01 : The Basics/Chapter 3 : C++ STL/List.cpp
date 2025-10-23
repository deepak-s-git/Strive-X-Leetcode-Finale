/************************************************************
 * 📘 Topic: List in C++
 * ----------------------------------------------------------
 * The `list` container in STL is a **doubly linked list** 
 * that allows fast insertion and deletion at both ends 
 * and at any position.
 * 
 * 🧠 Concepts Covered:
 * - Initialization and push/pop operations
 * - Accessing front/back elements
 * - Insert, Erase, Remove
 * - Reverse, Sort, Unique
 * - Swapping lists
 * 
 * ⚙️ Time Complexity:
 * - Insertion/Deletion: O(1)
 * - Traversal: O(n)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /*********************** 🎯 Initialization ************************/
    list<int> ls; 
    ls.push_back(2);      // [2]
    ls.emplace_back(4);   // [2,4]
    ls.push_front(1);     // [1,2,4]
    ls.emplace_front(0);  // [0,1,2,4]

    cout << "List after push operations: ";
    for (auto it : ls) cout << it << " ";
    cout << "\n";

    /*********************** 🔍 Access Elements ************************/
    cout << "Front: " << ls.front() << "\n"; // first element
    cout << "Back: " << ls.back() << "\n";   // last element

    /*********************** ✂️ Erase and Insert ************************/
    auto it = ls.begin();
    advance(it, 2);       // Move iterator to 3rd position
    ls.insert(it, 10);    // [0,1,10,2,4]
    
    ls.erase(--ls.end()); // removes last element
    cout << "After insertion & erase: ";
    for (auto val : ls) cout << val << " ";
    cout << "\n";

    /*********************** 🌀 Modifying List ************************/
    ls.reverse(); // reverses the list
    cout << "Reversed List: ";
    for (auto val : ls) cout << val << " ";
    cout << "\n";

    ls.sort();  // sorts in ascending order
    ls.unique(); // removes consecutive duplicates

    /*********************** 📦 Other Operations ************************/
    list<int> ls2 = {7,8,9};
    ls.swap(ls2);

    cout << "After swap (ls): ";
    for (auto val : ls) cout << val << " ";
    cout << "\n";

    ls.clear();
    cout << "List empty? " << ls.empty() << "\n";

    return 0;
}
