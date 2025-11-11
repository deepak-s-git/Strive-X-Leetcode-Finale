# 📘 Phase 1 — Chapter 5: Recursion

Welcome to **Chapter 5: Recursion**, one of the most important foundations of programming and problem-solving.  
Recursion teaches how problems can be broken down into **smaller subproblems**, helping you think **logically and hierarchically**.

---

## 🎯 Learning Objectives

By completing this chapter, you will learn:

- The **concept and flow** of recursive functions  
- How **base conditions** prevent infinite calls  
- Difference between **parameterized** and **functional** recursion  
- How to apply recursion in **arrays, strings, and mathematical problems**  
- How to use **backtracking** effectively in printing sequences  
- How to estimate **time and space complexity** for recursive calls  

---

## 🧩 Topics Covered

| No. | Concept | Description |
|:---:|:---------|:-------------|
| 1️⃣ | **Printing Recursion Basics** | Understanding recursion through simple printing problems (`printName`, `print1toN`, `printNto1`) |
| 2️⃣ | **Backtracking** | Printing numbers in reverse or forward order during the “return phase” of recursion |
| 3️⃣ | **Parameterized vs Functional Recursion** | `sumParameterized()` vs `factFunctional()` examples to compare logic flow |
| 4️⃣ | **Recursion on Arrays and Strings** | Reversing arrays, checking palindromes, and Fibonacci recursion |
| 5️⃣ | **Stack Visualization** | Understanding how recursion calls are pushed and popped from the stack |

---

---

## 🧠 Key Concepts Reinforced

- **Base Case:** Defines the stopping point for recursion.  
- **Recursive Case:** Defines how a function calls itself with smaller input.  
- **Stack Behavior:** Each call is placed on the call stack until the base case is reached.  
- **Backtracking:** Performing operations *after* recursive calls while the stack unwinds.  
- **Parameter Passing:** Using function arguments to carry computation state.  

---

| Program                    | Time Complexity | Space Complexity |
| -------------------------- | --------------- | ---------------- |
| Print Functions            | O(N)            | O(N)             |
| Sum / Factorial            | O(N)            | O(N)             |
| Reverse Array / Palindrome | O(N)            | O(N)             |
| Fibonacci (Naive)          | O(2ⁿ)           | O(N)             |


🏁 Chapter Outcome

By the end of this chapter, you’ll be able to:

Understand recursive function flow and stack usage
Implement base and recursive cases for multiple scenarios
Distinguish between parameterized and functional recursion
Apply recursion to arrays, strings, and mathematical problems
Prepare for backtracking, divide & conquer, and dynamic programming