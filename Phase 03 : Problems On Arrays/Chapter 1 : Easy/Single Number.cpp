/************************************************************
 * 🧩 Problem: Single Number (Every element appears twice except one)
 *
 * ----------------------------------------------------------
 * Given a non-empty array of integers `nums`, every element
 * appears twice except for one. Find that single one.
 *
 * Example:
 *   Input:  [4, 1, 2, 1, 2]
 *   Output: 4
 *
 ************************************************************/


/************************************************************
 * 🟠 Approach 1 — Brute Force (Hash Map Frequency)
 *
 * 🔍 Intuition:
 * - Count occurrences of every element using an unordered_map.
 * - The element with frequency 1 is the answer.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(n)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) { 
    unordered_map<int,int> a;
    for(auto x: nums)
        a[x]++;

    for(auto z : a)
        if(z.second == 1)
            return z.first;

    return -1; // should never happen for valid input
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Single Number (Brute - Map): " << singleNumber(nums) << endl;
    return 0;
}


/************************************************************
 * 🟡 Approach 2 — Better (Sorting + Pair Check)
 *
 * 🔍 Intuition:
 * - Sort the array.
 * - Pairs of equal elements will be adjacent.
 * - Scan with step of 2:
 *      - If nums[i] != nums[i-1], then nums[i-1] is the single.
 * - If all pairs are fine, the last element is the unique one.
 *
 * ⚙️ Time Complexity:  O(n log n)
 * 💾 Space Complexity: O(1)  (if we ignore sort's internal stack)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) { 
    sort(nums.begin(), nums.end());
    for(int i = 1; i < nums.size(); i += 2) {
        if(nums[i] != nums[i - 1])
            return nums[i - 1];
    }
    return nums[nums.size() - 1];
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Single Number (Better - Sort): " << singleNumber(nums) << endl;
    return 0;
}


/************************************************************
 * 🟢 Approach 3 — Optimal (XOR Trick)
 *
 * 🔍 Intuition:
 * - XOR of a number with itself is 0: x ^ x = 0
 * - XOR of a number with 0 is the number: x ^ 0 = x
 * - Since all numbers except one appear twice:
 *      x1 ^ x1 ^ x2 ^ x2 ^ ... ^ single = single
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) { 
    int ans = 0;
    for(auto x : nums)
        ans ^= x;
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Single Number (Optimal - XOR): " << singleNumber(nums) << endl;
    return 0;
}
