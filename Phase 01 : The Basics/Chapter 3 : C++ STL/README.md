# 🧩 Chapter 3 — Standard Template Library (STL) in C++

## 🎯 Goal
Master the powerful STL of C++ — prebuilt data structures, algorithms, and iterators for efficient code.

---

## 📘 What is STL?
The Standard Template Library (STL) is a collection of template-based classes and functions providing optimized, reusable, generic components to handle data structures and algorithms.

---

## 🧱 STL Major Components

| Component  | Description                         | Examples                     |
|------------|-----------------------------------|------------------------------|
| Containers | Store objects and variables        | `vector`, `list`, `set`, `map` |
| Algorithms | Operations like sort, search, etc. | `sort()`, `find()`, `count()`  |
| Iterators  | Bridge between containers & algos | `begin()`, `end()`, `rbegin()`, `rend()` |
| Functors   | Function objects for customization | `greater<int>()`, custom comparators |

---

## 🧩 STL Containers: Pair and Vector

### Pair
A simple container that stores two heterogeneous objects as a single unit.

**Key Points**
- Access using `.first` and `.second`
- Commonly used in `map`, `priority_queue`, and algorithms.

```cpp
pair<int, string> p = {1, "Hello"};
cout << p.first << " " << p.second;
---

### 📦 Vector (Dynamic Array)
Resizable array structure for storing elements.

- Functions: `push_back()`, `emplace_back()`, `erase()`, `insert()`, `clear()`
- Access: `[]` or `.at()`

| Operation | Complexity |
|------------|-------------|
| Access | O(1) |
| Insert/Erase (end) | O(1) |
| Insert/Erase (middle) | O(n) |

---

### 📜 List (Doubly Linked List)
Allows fast insertion/deletion at both ends.

- Functions: `push_front()`, `push_back()`, `erase()`, `remove()`, `reverse()`, `sort()`
- Time Complexity: All insertions/removals → O(1) (if iterator known)

---

### 🧭 Deque (Double-Ended Queue)
Insertion/deletion allowed at both ends.

- Functions: `push_front()`, `push_back()`, `pop_front()`, `pop_back()`

| Operation | Complexity |
|------------|-------------|
| Front/Back operations | O(1) |
| Random access | O(1) |

---

### 🧱 Stack (LIFO)
- Functions: `push()`, `pop()`, `top()`, `size()`, `empty()`
- Use Case: Function calls, recursion, undo
- Complexity: All operations → O(1)

---

### 🔁 Queue (FIFO)
- Functions: `push()`, `pop()`, `front()`, `back()`
- Use Case: Scheduling, BFS, caching
- Complexity: All operations → O(1)

---

### ⛰️ Priority Queue (Heap)
Top element is the largest (max-heap by default).
priority_queue<int> maxh;
priority_queue<int, vector<int>, greater<int>> minh;


| Operation | Complexity |
|------------|-------------|
| push()/pop() | O(log n) |
| top() | O(1) |

---

### 🌿 Set
Stores **unique** elements in sorted order.

- Functions: `insert()`, `erase()`, `find()`, `count()`
- Traversal: Ascending order
- Complexity: O(log n)

---

### 🌾 Multiset
Similar to set but **allows duplicates**.

- Functions: `insert()`, `count()`, `erase()`
- Complexity: O(log n)

---

### ⚡ Unordered Set
Stores **unique** elements (unsorted, uses hashing).

- Functions: `insert()`, `find()`, `erase()`

| Operation | Average | Worst |
|------------|----------|--------|
| insert(), find(), erase() | O(1) | O(n) |

---

### 🗺️ Map
Stores **key-value** pairs sorted by key.

map<int, string> mp;
mp = "One";​
mp.emplace(2, "Two");

- Functions: `insert()`, `emplace()`, `erase()`, `find()`
- Complexity: O(log n)

---

### 🗃️ Multimap
Allows duplicate keys, maintains sorted order.

Use Case: When multiple values share the same key.

multimap<int, string> mm;
mm.insert({1, "A"});
mm.insert({1, "B"});


Time Complexity: O(log n)

---

### 💥 Unordered Map
Stores key-value pairs using hashing (no order).

- Functions: `insert()`, `find()`, `erase()`, `count()`
- Access: `[]`

| Case | Complexity |
|-------|-------------|
| Average | O(1) |
| Worst | O(n) |

---

## 🧾 STL Containers Summary

| Container | Ordered | Duplicates | Access | Insertion | Erasure | Structure |
|------------|----------|-------------|----------|-------------|-----------|-------------|
| vector | ❌ No | ✅ Yes | O(1) | O(n) | O(n) | Dynamic Array |
| list | ❌ No | ✅ Yes | O(n) | O(1) | O(1) | Doubly Linked List |
| deque | ❌ No | ✅ Yes | O(1) | O(1) | O(1) | Double-ended Array |
| stack | ❌ No | ✅ Yes | O(1) | O(1) | O(1) | Adapter (Deque) |
| queue | ❌ No | ✅ Yes | O(1) | O(1) | O(1) | Adapter (Deque) |
| priority_queue | ❌ No | ✅ Yes | O(1) | O(log n) | O(log n) | Heap |
| set | ✅ Yes | ❌ No | O(log n) | O(log n) | O(log n) | Balanced BST |
| multiset | ✅ Yes | ✅ Yes | O(log n) | O(log n) | O(log n) | Balanced BST |
| unordered_set | ❌ No | ❌ No | O(1) | O(1) | O(1) | Hash Table |
| map | ✅ Yes | ❌ No | O(log n) | O(log n) | O(log n) | Balanced BST |
| multimap | ✅ Yes | ✅ Yes | O(log n) | O(log n) | O(log n) | Balanced BST |
| unordered_map | ❌ No | ❌ No | O(1) | O(1) | O(1) | Hash Table |

---