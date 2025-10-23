/************************************************************
 * 📘 Topic: Queue in C++
 * ----------------------------------------------------------
 * The `queue` is a FIFO (First-In-First-Out) container adapter.
 * It allows insertion at the back and deletion from the front.
 *
 * 🧠 Concepts Covered:
 * - push(), emplace(), pop()
 * - front(), back(), size(), empty()
 * - swap() operation
 *
 * ⚙️ Time Complexity:
 * - push(), pop(), front(), back(): O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /*********************** 🎯 Initialization ************************/
    queue<int> q;

    q.push(10);
    q.push(20);
    q.emplace(30);   // constructs in place
    q.push(40);

    cout << "Queue created: front → ";
    queue<int> temp = q;   // copy for display (queue cannot be iterated directly)
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << "← back\n\n";

    /*********************** 🔍 Access Elements ************************/
    cout << "Front element: " << q.front() << "\n"; // first element (10)
    cout << "Back element: "  << q.back()  << "\n"; // last element (40)

    /*********************** ⚙️ Basic Operations ************************/
    q.pop(); // removes 10
    cout << "After one pop, new front: " << q.front() << "\n"; // now 20

    q.push(50);
    cout << "After pushing 50, new back: " << q.back() << "\n";

    cout << "Queue size: " << q.size() << "\n\n";

    /*********************** 🔄 Swap Operation ************************/
    queue<int> q2;
    q2.push(100);
    q2.push(200);

    q.swap(q2);
    cout << "After swapping, front of q: " << q.front() << "\n"; // 100

    /*********************** 🗑️ Emptying the Queue ************************/
    cout << "\nEmptying the queue:\n";
    while (!q.empty()) {
        cout << "Popping: " << q.front() << "\n";
        q.pop();
    }

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << "\n";

    return 0;
}
