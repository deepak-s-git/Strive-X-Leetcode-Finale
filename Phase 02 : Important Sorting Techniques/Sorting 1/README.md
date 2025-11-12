# ⚙️ Phase 2 — Sorting (Part 1)

Welcome to **Phase 2: Sorting Algorithms**, where you’ll learn how data can be ordered efficiently for faster searching, comparison, and organization.  
This first part focuses on the **foundational sorting algorithms** — the building blocks of all modern sorting techniques.

---

## 🎯 Learning Objectives

By the end of **Sorting Part 1**, you will:

- Understand the **core idea of sorting** — arranging data in a specific order (ascending/descending).  
- Learn **three fundamental algorithms**: Selection Sort, Bubble Sort, and Insertion Sort.  
- Analyze **time complexity**, **space complexity**, and **stability** of each algorithm.  
- Understand what **in-place sorting** means and how it reduces memory usage.  
- Build the foundation for **efficient divide-and-conquer algorithms** (covered in Part 2).

---

## 🧩 Algorithms Covered

| No. | Algorithm | Key Idea | Time Complexity | Space | Stability | Best Use Case |
|:---:|:-----------|:----------|:----------------|:--------|:-----------|:--------------|
| 1️⃣ | **Selection Sort** | Repeatedly find the smallest element from unsorted part and place it at the beginning | O(N²) | O(1) | ❌ Not Stable | Small datasets, minimal swaps |
| 2️⃣ | **Bubble Sort** | Repeatedly swap adjacent elements if they are in the wrong order | O(N²)<br>(Best: O(N)) | O(1) | ✅ Stable | Nearly sorted arrays |
| 3️⃣ | **Insertion Sort** | Insert each element into its correct position in the sorted part | O(N²)<br>(Best: O(N)) | O(1) | ✅ Stable | Small or nearly sorted arrays |

---

## 🧠 Conceptual Overview

- **Sorting Algorithms** are used to arrange data in a defined order to make it easier to process and search.  
- These algorithms are **comparison-based** — elements are compared and swapped or shifted based on their values.  
- All three algorithms in this chapter are:
  - **In-place** → No extra array or data structure is used.  
  - **Iterative** → Implemented using loops, not recursion.  
  - **Stable (except Selection Sort)** → Maintain relative order of equal elements.  

---

## 🧩 Key Comparisons

| Feature | Selection Sort | Bubble Sort | Insertion Sort |
|----------|----------------|-------------|----------------|
| **Approach** | Select minimum each pass | Swap adjacent if out of order | Insert each element into sorted part |
| **Best Case** | O(N²) | O(N) | O(N) |
| **Worst Case** | O(N²) | O(N²) | O(N²) |
| **Space** | O(1) | O(1) | O(1) |
| **Stable** | ❌ | ✅ | ✅ |
| **In-Place** | ✅ | ✅ | ✅ |

---