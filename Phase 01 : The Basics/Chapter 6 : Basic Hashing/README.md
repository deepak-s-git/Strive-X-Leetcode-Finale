# 📘 Phase 1 — Chapter 6: Hashing

Hashing is one of the most powerful and widely used concepts in Data Structures and Algorithms.  
It forms the backbone of efficient data retrieval, lookup operations, and frequency-based computations.

This chapter introduces the theoretical foundations of hashing — understanding its purpose, working principles, and applications in problem-solving.

---

## 🧠 What is Hashing?

**Hashing** is a technique used to map data of arbitrary size to fixed-size values, called **hash values** or **hash codes**.  
These hash values are used as indexes or keys to store and retrieve data efficiently.

The primary goal of hashing is to achieve **constant-time access (O(1))** on average for operations like insertion, search, and deletion.

---

## 🎯 Why Do We Use Hashing?

In many algorithms and applications, we need to check if an element exists, count occurrences, or quickly access data.  
Traditional methods like searching through arrays or linked lists take **O(n)** time, which becomes inefficient for large datasets.

Hashing provides a way to **store and access data in constant average time**, significantly improving performance in operations like:

- Checking membership (whether an element exists)
- Counting frequencies
- Storing key-value pairs
- Removing duplicates
- Building associative data structures

---

## ⚙️ How Hashing Works

At the heart of hashing lies the **Hash Function** — a mathematical function that converts an input (key) into an integer index.  
This index determines where the key’s corresponding value will be stored in a **hash table**.

A hash table is a fixed-size structure that holds data at positions derived from hash values.

1. The key is processed by the hash function.
2. The function returns an index within a defined range.
3. The data is stored at that computed index for quick retrieval.

Formally,  

When we later need to retrieve or update the data, the same hash function is applied again to locate it instantly.

---

## 🚧 Collisions in Hashing

Since different keys can generate the same hash index, **collisions** are inevitable in practical scenarios.  
Collision handling strategies ensure that the hash table still functions correctly when such cases occur.

### Common Collision Resolution Techniques:
- **Chaining:**  
  Multiple elements that hash to the same index are stored in a linked list at that index.
- **Open Addressing:**  
  When a collision occurs, the algorithm searches for the next available slot using a probing sequence (e.g., linear, quadratic, or double hashing).

The efficiency of hashing depends on how well the collisions are minimized or managed.

---

## 🧩 Properties of a Good Hash Function

A well-designed hash function should:
1. **Distribute keys uniformly** across the hash table.
2. **Minimize collisions** as much as possible.
3. **Be deterministic** — the same key always produces the same hash value.
4. **Be fast to compute**, ensuring that the hashing operation itself does not become a bottleneck.

---

## 🧮 Types of Hashing

1. **Array Hashing:**  
   Uses arrays as direct access tables.  
   Works best when the key range is small and known in advance.

2. **Hash-Based Data Structures (Dynamic Hashing):**  
   Uses hash tables with dynamic memory allocation (e.g., `unordered_map`, `unordered_set`).  
   Suitable for large, sparse, or unpredictable datasets.

3. **Perfect Hashing:**  
   A collision-free hashing technique, often used when the key set is fixed and known beforehand.

4. **Cryptographic Hashing:**  
   Focuses on security rather than storage efficiency, used in cryptography for data integrity (e.g., SHA, MD5).

---

## 📈 Time and Space Complexity

| Operation | Average Time | Worst Case | Space Complexity |
|------------|---------------|-------------|------------------|
| Insertion  | O(1) | O(n) | O(n) |
| Search     | O(1) | O(n) | O(n) |
| Deletion   | O(1) | O(n) | O(n) |

> Note:  
> The worst case (O(n)) occurs when all elements hash to the same index, causing heavy collisions.  
> However, with a good hash function and sufficient table size, average performance remains near constant.

---

## 🧠 Key Takeaways

- Hashing provides **fast access** and **efficient storage** for large datasets.
- The **hash function** is the core component — it determines performance and collision rate.
- **Collisions** are unavoidable but can be handled with chaining or probing techniques.
- **Array hashing** is efficient for small, bounded ranges, while **hash maps** are ideal for dynamic or large key spaces.
- Hashing is used in various advanced data structures like:
  - Hash Maps / Hash Tables
  - Hash Sets
  - Caches
  - Symbol Tables
  - Frequency Counters
  - Bloom Filters

---