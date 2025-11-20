/************************************************************
 * 🧩 Problem: Missing Number (LeetCode)
 *
 * ----------------------------------------------------------
 * You are given an array `nums` containing n distinct numbers
 * taken from the range [0, n]. Return the one number missing
 * from this range.
 *
 * Example:
 *   Input:  [3, 0, 1]
 *   Output: 2
 *
 ************************************************************/


/************************************************************
 * 🟠 Approach 1 — Brute Force (Sorting + Scan)
 *
 * 🔍 Intuition:
 * - Sort the array.
 * - Check:
 *    1) If first element != 0 → missing = 0
 *    2) Else if last element != n → missing = n
 *    3) Else find first index i where nums[i] != i.
 *
 * ⚙️ Time Complexity:  O(n log n)
 * 💾 Space Complexity: O(1)  (ignoring sort’s internal stack)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();

    // case 1: 0 is missing
    if (nums[0] != 0) return 0;

    // case 2: n is missing
    if (nums[n - 1] != n) return n;

    // case 3: some i in (0..n-1) is missing
    for (int i = 1; i < n; i++) {
        if (nums[i] != i) return i;
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Missing Number (Brute - Sort): " << missingNumber(nums) << endl;
    return 0;
}


/************************************************************
 * 🟡 Approach 2 — Better (Extra Array Hashing)
 *
 * 🔍 Intuition:
 * - Create a vector `v` of size n+1, filled with -1.
 * - For every number x in nums, set v[x] = x.
 * - First index i where v[i] == -1 is the missing number.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(n)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<int> v(n + 1, -1);

    for (int i = 0; i < nums.size(); i++) {
        v[nums[i]] = nums[i];
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == -1) return i;
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Missing Number (Better - Hash Array): " << missingNumber(nums) << endl;
    return 0;
}


/************************************************************
 * 🟢 Approach 3 — Optimal (Sum Formula)
 *
 * 🔍 Intuition:
 * - Sum of numbers from 0 to n is: n * (n + 1) / 2
 * - Missing number = totalSum - sum(nums)
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int totalSum = (n * (n + 1)) / 2;
    int arrSum = accumulate(nums.begin(), nums.end(), 0);

    return totalSum - arrSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Missing Number (Optimal - Sum): " << missingNumber(nums) << endl;
    return 0;
}


/************************************************************
 * 🟢 Approach 4 — Optimal (XOR Trick)
 *
 * 🔍 Intuition:
 * - XOR all numbers from 1 to n into `ans`.
 * - XOR all elements of nums into `ans`.
 * - Pairs cancel out; remaining value is the missing number.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        ans ^= i;
    }

    for (int i = 0; i < nums.size(); i++) {
        ans ^= nums[i];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Missing Number (Optimal - XOR): " << missingNumber(nums) << endl;
    return 0;
}
