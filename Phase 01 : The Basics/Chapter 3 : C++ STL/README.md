# 🧩 Chapter 3 — Standard Template Library (STL) in C++

## 🎯 Goal
Master the most powerful part of C++ — the STL, which provides prebuilt data structures, algorithms, and iterators to write efficient, cleaner, and faster code.

---

## 📘 What is STL?
The **Standard Template Library (STL)** in C++ is a collection of template-based classes and functions that help developers efficiently handle data structures and algorithms.  
It eliminates the need to manually implement basic data structures and provides optimized, reusable, and generic components.

---

## 🧱 STL is Divided into Four Major Components

| Component | Description | Example Containers |
|------------|--------------|--------------------|
| **1️⃣ Containers** | Store data (objects and variables) | `vector`, `list`, `set`, `map` |
| **2️⃣ Algorithms** | Perform operations like searching, sorting, counting | `sort()`, `find()`, `count()` |
| **3️⃣ Iterators** | Bridge between containers and algorithms | `begin()`, `end()`, `rbegin()`, `rend()` |
| **4️⃣ Functors** | Function objects used for custom operations | `greater<int>()`, custom comparators |

---

## 🧩 STL Containers Covered in This Chapter

Below is a structured overview of all containers and utilities covered in this chapter.

---

### 🧠 1. Pair
A simple container that stores two heterogeneous objects as a single unit.

**Key Points:**
- Access with `.first` and `.second`
- Commonly used in maps and priority queues

```cpp
pair<int, string> p = {1, "Hello"};
cout << p.first << " " << p.second;
```

---

### 📦 2. Vector
A dynamic array that resizes automatically when elements are added or removed.

**Key Functions:**
- `push_back()`, `emplace_back()`  
- `erase()`, `insert()`, `clear()`  
- Access with `[]` or `.at()`

**Time Complexity:**

| Operation | Complexity |
|------------|-------------|
| Access | O(1) |
| Insert/Erase (end) | O(1) |
| Insert/Erase (middle) | O(n) |

---

### 📜 3. List
A **doubly-linked list** that allows fast insertion/deletion at both ends.

**Key Functions:**
- `push_front()`, `push_back()`, `emplace()`  
- `erase()`, `remove()`, `reverse()`, `sort()`  

**Time Complexity:**  
All insertions/removals → O(1) *(if iterator known)*

---

### 🧭 4. Deque
A **double-ended queue** allowing insertion/deletion at both front and back.

**Key Functions:**
- `push_front()`, `push_back()`  
- `pop_front()`, `pop_back()`  
- Random access allowed via index `[]`  

**Time Complexity:**
- Front/Back operations → O(1)  
- Random Access → O(1)

---

### 🧱 5. Stack
A **LIFO (Last-In-First-Out)** container adapter.

**Key Functions:**
- `push()`, `pop()`, `top()`  
- `size()`, `empty()`  

**Use Case:** Function calls, recursion, undo mechanisms.  
**Time Complexity:** All operations → O(1)

---

### 🔁 6. Queue
A **FIFO (First-In-First-Out)** container adapter.

**Key Functions:**
- `push()`, `pop()`, `front()`, `back()`  
- `size()`, `empty()`  

**Use Case:** Scheduling, BFS traversal, caching.  
**Time Complexity:** All operations → O(1)

---

### ⛰️ 7. Priority Queue
Implements a heap where the top element is always the largest (max-heap) by default.

**Types:**
- Max Heap → `priority_queue<int>`  
- Min Heap → `priority_queue<int, vector<int>, greater<int>>`

**Key Functions:**
- `push()`, `pop()`, `top()`, `emplace()`  
- `size()`, `empty()`

**Time Complexity:**

| Operation | Complexity |
|------------|-------------|
| push() / pop() | O(log n) |
| top() | O(1) |

---

### 🌿 8. Set
Stores unique elements in **sorted order (BST-based)**.

**Key Functions:**
- `insert()`, `erase()`, `find()`, `count()`, `clear()`  

**Iteration:** Ascending order  
**Time Complexity:** O(log n) for all major operations

---

### 🌾 9. Multiset
Like set, but allows **duplicate elements** and maintains sorted order.

**Key Functions:**
- `insert()`, `count()`, `erase()` *(one or all occurrences)*  

**Time Complexity:** O(log n)

---

### ⚡ 10. Unordered Set
Stores unique elements, but not sorted — uses **hashing** internally.

**Key Functions:**
- `insert()`, `find()`, `erase()`  

| Operation | Average | Worst |
|------------|----------|-------|
| insert(), find(), erase() | O(1) | O(n) |

---

### 🗺️ 11. Map
Stores elements as **key-value pairs** in sorted order by key.

**Key Functions:**
- `insert()`, `emplace()`, `erase()`, `find()`, `count()`  
- Access via `[]` or `.at()`

```cpp
map<int, string> mp;
mp[1] = "One";
mp.emplace(2, "Two");
```

**Time Complexity:** O(log n) for insert, find, erase.

---

### 🗃️ 12. Multimap
Allows **duplicate keys**, maintains sorted order.

**Use Case:** When multiple values share the same key.

```cpp
multimap<int, string> mm;
mm.insert({1, "A"});
mm.insert({1, "B"});
```

**Time Complexity:** O(log n)

---

### 💥 13. Unordered Map
Stores **unique key-value pairs** using hashing (no guaranteed order).

**Key Functions:**
- `insert()`, `find()`, `erase()`, `count()`  
- Access via `[]`

**Time Complexity:**  
Average → O(1), Worst → O(n)

---

## 🧾 Summary Table — STL Containers Overview

| Container | Ordered | Duplicates | Access | Insertion | Erasure | Internal Structure |
|------------|----------|-------------|----------|-------------|-----------|------------------|
| **vector** | ❌ No | ✅ Yes | O(1) | O(n) | O(n) | Dynamic Array |
| **list** | ❌ No | ✅ Yes | O(n) | O(1) | O(1) | Doubly Linked List |
| **deque** | ❌ No | ✅ Yes | O(1) | O(1) | O(1) | Double-ended Array |
| **stack** | ❌ No | ✅ Yes | O(1) | O(1) | O(1) | Adapter (Deque) |
| **queue** | ❌ No | ✅ Yes | O(1) | O(1) | O(1) | Adapter (Deque) |
| **priority_queue** | ❌ No | ✅ Yes | O(1) | O(log n) | O(log n) | Heap |
| **set** | ✅ Yes | ❌ No | O(log n) | O(log n) | O(log n) | Balanced BST |
| **multiset** | ✅ Yes | ✅ Yes | O(log n) | O(log n) | O(log n) | Balanced BST |
| **unordered_set** | ❌ No | ❌ No | O(1) | O(1) | O(1) | Hash Table |
| **map** | ✅ Yes | ❌ No | O(log n) | O(log n) | O(log n) | Balanced BST |
| **multimap** | ✅ Yes | ✅ Yes | O(log n) | O(log n) | O(log n) | Balanced BST |
| **unordered_map** | ❌ No | ❌ No | O(1) | O(1) | O(1) | Hash Table |

---