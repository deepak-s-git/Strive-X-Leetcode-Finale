/************************************************************
 * 📘 CHAPTER 6 — Hashing
 * ----------------------------------------------------------
 * File: 01_Frequency_Count_Array_vs_HashMap.cpp
 *
 * 🧩 Topics Covered:
 * 1️⃣ Counting frequency of numbers in an array using Array Hashing
 * 2️⃣ Counting frequency of characters in a string using Array Hashing
 * 3️⃣ Performing the same tasks using Unordered Maps (HashMap)
 * 4️⃣ Comparing Array Hashing vs HashMap approach
 *
 * 🧠 Concepts:
 * - Frequency counting
 * - Index mapping (Array-based hashing)
 * - Hash functions and dynamic hashing (unordered_map)
 * - Time and space trade-offs
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

/* ---------------------------------------------------------
   🟢 PART 1 — ARRAY HASHING
   ----------------------------------------------------------
   Idea:
   - Use an array as a frequency table (hash).
   - Works when element range is small and known in advance.

   Example:
     Input: arr = [1, 3, 2, 1, 3, 4]
     Output: freq[1] = 2, freq[2] = 1, freq[3] = 2, freq[4] = 1

   Time Complexity: O(N)
   Space Complexity: O(maxElement + 1)
---------------------------------------------------------- */
void frequencyArrayHashing() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int maxVal = *max_element(arr.begin(), arr.end());
    vector<int> hash(maxVal + 1, 0); // frequency array

    for (int x : arr)
        hash[x]++; // count occurrences

    cout << "\nFrequencies (Array Hashing):\n";
    for (int i = 0; i <= maxVal; i++) {
        if (hash[i] > 0)
            cout << i << " → " << hash[i] << endl;
    }
}

/* ---------------------------------------------------------
   🟣 PART 2 — CHARACTER FREQUENCY USING ARRAY HASHING
   ----------------------------------------------------------
   Idea:
   - For lowercase letters (a–z), we can map each character
     to an index: index = ch - 'a'
   - Works great for fixed-size alphabet (26 letters).

   Example:
     Input: "apple"
     Output: a→1, p→2, l→1, e→1

   Time Complexity: O(N)
   Space Complexity: O(26)
---------------------------------------------------------- */
void charFrequencyArray() {
    string s;
    cout << "\nEnter a lowercase string: ";
    cin >> s;

    vector<int> freq(26, 0);
    for (char ch : s)
        freq[ch - 'a']++;

    cout << "\nCharacter Frequencies (Array Hashing):\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << (char)('a' + i) << " → " << freq[i] << endl;
    }
}

/* ---------------------------------------------------------
   🔵 PART 3 — HASHMAP / UNORDERED_MAP APPROACH
   ----------------------------------------------------------
   Idea:
   - Instead of relying on index mapping, use key-value pairs.
   - Can store counts for large or unknown ranges.
   - Works for integers, characters, strings, etc.

   Example:
     Input: arr = [100, 200, 100, 300]
     Output: 100→2, 200→1, 300→1

   Time Complexity: O(N) average, O(N²) worst (hash collisions)
   Space Complexity: O(N)
---------------------------------------------------------- */
void frequencyHashMap() {
    int n;
    cout << "\nEnter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int, int> mp;
    for (int x : arr)
        mp[x]++; // increment count

    cout << "\nFrequencies (HashMap):\n";
    for (auto &p : mp)
        cout << p.first << " → " << p.second << endl;
}

/* ---------------------------------------------------------
   🔴 PART 4 — CHARACTER FREQUENCY USING HASHMAP
   ----------------------------------------------------------
   - Similar idea as numeric hash map but with char keys.
   - Handles any character set: lowercase, uppercase, digits,
     symbols, etc.

   Time Complexity: O(N)
   Space Complexity: O(uniqueCharacters)
---------------------------------------------------------- */
void charFrequencyHashMap() {
    string s;
    cout << "\nEnter any string: ";
    cin >> s;

    unordered_map<char, int> mp;
    for (char ch : s)
        mp[ch]++;

    cout << "\nCharacter Frequencies (HashMap):\n";
    for (auto &p : mp)
        cout << p.first << " → " << p.second << endl;
}

/* ---------------------------------------------------------
   ⚖️ DIFFERENCE: ARRAY HASHING vs HASHMAP
   ----------------------------------------------------------
   | Feature                 | Array Hashing                     | HashMap / Unordered_Map               |
   |--------------------------|-----------------------------------|--------------------------------------|
   | Range Known?             | Yes, must be known (e.g. 0–10⁶)   | No, dynamic and flexible             |
   | Data Type Limitation     | Works mainly for integers/chars   | Works for any key type               |
   | Space Efficiency         | Can be high if range is huge      | More compact for sparse data         |
   | Access Time              | O(1) always (index-based)         | O(1) average, O(N) worst-case        |
   | Memory Overhead          | Less control, fixed size          | Slight overhead due to hashing table |
   | Example Use Case         | Counting 1–100 elements, a–z      | Counting large or dynamic datasets   |
---------------------------------------------------------- */


/* ---------------------------------------------------------
   🧠 DEMO RUNNER (Optional)
   ----------------------------------------------------------
   You can choose which demonstration to run.
---------------------------------------------------------- */
int main() {
    cout << "==============================\n";
    cout << "   HASHING DEMONSTRATION\n";
    cout << "==============================\n";
    cout << "1 → Frequency Count (Array Hashing)\n";
    cout << "2 → Character Frequency (Array Hashing)\n";
    cout << "3 → Frequency Count (HashMap)\n";
    cout << "4 → Character Frequency (HashMap)\n";
    cout << "Choose option: ";

    int opt;
    cin >> opt;

    switch (opt) {
        case 1: frequencyArrayHashing(); break;
        case 2: charFrequencyArray(); break;
        case 3: frequencyHashMap(); break;
        case 4: charFrequencyHashMap(); break;
        default: cout << "Invalid option!" << endl;
    }

    return 0;
}