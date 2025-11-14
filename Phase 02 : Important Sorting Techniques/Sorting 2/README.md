# ⚙️ Phase 2 — Sorting (Part 2)

Welcome to **Sorting (Part 2)**, where you move from basic O(n²) algorithms to more powerful and efficient **Divide & Conquer**–based sorting techniques.  
These algorithms form the foundation of efficient real-world sorting due to their performance, scalability, and structured approach.

This chapter also covers **recursive variations** of the basic sorts, deepening your understanding of recursion and problem reduction.

---

## 🎯 Learning Objectives

After completing this part, you will:

- Understand how **divide-and-conquer** sorting algorithms work.  
- Learn why **Merge Sort** guarantees O(n log n) time.  
- Understand how **Quick Sort** uses partitioning to sort efficiently.  
- Analyze recursion depth, stack usage, and base cases.  
- Compare in-place vs out-of-place sorting strategies.  
- Learn recursive versions of Bubble Sort and Insertion Sort.

---

## 🧩 Algorithms Covered

### 🔹 **1. Merge Sort (Recursive)**
- Uses **Divide → Conquer → Combine** strategy  
- Breaks array until single elements remain  
- Merges sorted halves with stability  
- Guaranteed **O(n log n)** time in all cases  
- Requires additional memory (not in-place)

### 🔹 **2. Quick Sort**
- Uses **partitioning** around a pivot  
- Recursively sorts elements left and right of pivot  
- Very fast in practice  
- Average time: **O(n log n)**  
- Worst-case: **O(n²)** (when pivot selection is poor)  
- In-place but not stable

### 🔹 **3. Recursive Bubble Sort**
- Applies one bubble pass, then sorts remaining (n−1) elements  
- Same O(n²) complexity as iterative Bubble Sort  
- Demonstrates recursion for iterative logic

### 🔹 **4. Recursive Insertion Sort**
- Sorts first (n−1) elements recursively  
- Inserts last element in correct position  
- Same complexity as iterative version  
- Helps understand recursive reduction

---

## 🧮 Time & Space Complexity Overview

| Algorithm | Best | Average | Worst | Space | Stable | In-Place |
|----------|------|---------|--------|--------|--------|----------|
| **Merge Sort** | O(n log n) | O(n log n) | O(n log n) | O(n) | ✅ Yes | ❌ No |
| **Quick Sort** | O(n log n) | O(n log n) | O(n²) | O(log n) avg | ❌ No | ✅ Yes |
| **Recursive Bubble Sort** | O(n) | O(n²) | O(n²) | O(n) | ✅ Yes | ❌ Stack usage |
| **Recursive Insertion Sort** | O(n) | O(n²) | O(n²) | O(n) | ✅ Yes | ❌ Stack usage |

---

## 🧠 Key Concepts Reinforced

### **1. Divide & Conquer**
Break a problem into smaller parts, solve recursively, and combine results.  
Used heavily in Merge Sort and Quick Sort.

### **2. Recursion Mechanics**
- Base cases  
- Recursive reduction  
- Stack depth analysis  

### **3. Pivot & Partitioning**
Learn how the array can be rearranged around a pivot to reduce problem size.

### **4. Merging Technique**
Understand how sorted halves can be merged into a single sorted sequence.

### **5. Stability vs In-place**
Why some algorithms preserve relative order and how memory usage differs.

---