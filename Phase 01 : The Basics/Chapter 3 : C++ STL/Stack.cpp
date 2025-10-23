/************************************************************
 * 📘 Topic: Stack in C++
 * ----------------------------------------------------------
 * The `stack` is a LIFO (Last-In-First-Out) container adapter.
 * 
 * 🧠 Concepts Covered:
 * - push(), emplace(), pop()
 * - top(), size(), empty()
 * - swap() operation
 * 
 * ⚙️ Time Complexity:
 * - push(), pop(), top(): O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /*********************** 🎯 Initialization ************************/
    stack<int> st;
    st.push(10);
    st.push(20);
    st.emplace(30); // constructs in place
    st.push(40);

    cout << "Stack top: " << st.top() << "\n"; // 40

    /*********************** 🧩 Basic Operations ************************/
    st.pop(); // removes top (40)
    cout << "After pop, top: " << st.top() << "\n"; // 30

    cout << "Stack size: " << st.size() << "\n";

    /*********************** 🧱 Swap and Empty ************************/
    stack<int> st2;
    st2.push(100);
    st2.push(200);

    st.swap(st2);

    cout << "After swap, top of st: " << st.top() << "\n"; // 200

    // Emptying the stack
    while (!st.empty()) {
        cout << "Popping: " << st.top() << "\n";
        st.pop();
    }

    cout << "Is stack empty? " << st.empty() << "\n";

    return 0;
}
