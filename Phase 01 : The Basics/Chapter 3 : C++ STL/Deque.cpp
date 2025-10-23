/************************************************************
 * 📘 Topic: Deque in C++
 * ----------------------------------------------------------
 * The `deque` (Double-Ended Queue) allows insertion and 
 * deletion from both ends efficiently.
 * 
 * 🧠 Concepts Covered:
 * - push_front(), push_back(), pop_front(), pop_back()
 * - Access elements using at(), front(), back()
 * - Insert, Erase, Clear
 * - Size, Swap, Empty
 * 
 * ⚙️ Time Complexity:
 * - Access: O(1)
 * - Insertion/Deletion (ends): O(1)
 * - Insertion/Deletion (middle): O(n)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /*********************** 🎯 Initialization ************************/
    deque<int> dq;
    dq.push_back(10);
    dq.emplace_back(20);
    dq.push_front(5);
    dq.emplace_front(2);   // dq = [2,5,10,20]

    cout << "Deque elements: ";
    for (auto val : dq) cout << val << " ";
    cout << "\n";

    /*********************** 🔍 Access Elements ************************/
    cout << "Front: " << dq.front() << "\n";
    cout << "Back: " << dq.back() << "\n";
    cout << "Element at 2nd index: " << dq.at(2) << "\n";

    /*********************** ✂️ Erase and Insert ************************/
    dq.pop_back();   // removes from end
    dq.pop_front();  // removes from front
    dq.insert(dq.begin() + 1, 15); // insert 15 at second position

    cout << "After pop and insert: ";
    for (auto val : dq) cout << val << " ";
    cout << "\n";

    /*********************** 📦 Other Operations ************************/
    cout << "Size: " << dq.size() << "\n";
    dq.clear();
    cout << "Is deque empty? " << dq.empty() << "\n";

    deque<int> dq1 = {1, 2, 3};
    deque<int> dq2 = {7, 8, 9};
    dq1.swap(dq2);

    cout << "After swapping dq1: ";
    for (auto val : dq1) cout << val << " ";
    cout << "\n";

    return 0;
}
