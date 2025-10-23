/************************************************************
 * 📘 Topic: Priority Queue in C++
 * ----------------------------------------------------------
 * A `priority_queue` is a container adapter that provides
 * constant time access to the *largest* (by default) element.
 *
 * By default → Max Heap (largest element at top)
 * Can be customized → Min Heap (smallest element at top)
 *
 * 🧠 Concepts Covered:
 * - Max Heap and Min Heap creation
 * - push(), emplace(), pop(), top()
 * - size(), empty()
 *
 * ⚙️ Time Complexity:
 * - push(), pop(): O(log n)
 * - top(): O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /*********************** ⚡ MAX HEAP (Default) ************************/
    priority_queue<int> pq; // largest element stays on top

    // Insertion examples
    pq.push(10);
    pq.push(30);
    pq.emplace(20);
    pq.push(5);

    // Displaying max-heap
    cout << "Max-Heap Priority Queue: ";
    priority_queue<int> temp1 = pq;
    while (!temp1.empty()) {
        cout << temp1.top() << " ";  // prints in descending order
        temp1.pop();
    }
    cout << "\n";

    // Accessing and modifying elements
    cout << "Top element: " << pq.top() << "\n";  // 30
    pq.pop(); // removes top (30)
    cout << "New top after pop: " << pq.top() << "\n"; // 20

    cout << "Size of pq: " << pq.size() << "\n";
    cout << "Is empty? " << (pq.empty() ? "Yes" : "No") << "\n\n";


    /*********************** ⚙️ MIN HEAP ************************/
    // Syntax: priority_queue<Type, vector<Type>, greater<Type>>
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insertion examples
    minHeap.push(50);
    minHeap.push(10);
    minHeap.push(30);
    minHeap.emplace(20);

    // Displaying min-heap
    cout << "Min-Heap Priority Queue: ";
    priority_queue<int, vector<int>, greater<int>> temp2 = minHeap;
    while (!temp2.empty()) {
        cout << temp2.top() << " ";  // prints in ascending order
        temp2.pop();
    }
    cout << "\n";

    cout << "Smallest element (top): " << minHeap.top() << "\n";

    return 0;
}
