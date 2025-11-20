/************************************************************
 * 🧩 Problem: Max Consecutive Ones
 *
 * ----------------------------------------------------------
 * Given a binary array `nums`, return the maximum number of
 * consecutive 1's in the array.
 *
 * Example:
 *   Input:  [1, 1, 0, 1, 1, 1]
 *   Output: 3
 *
 ************************************************************/


/************************************************************
 * 🟠 Approach 1 — Brute Force (O(n²))
 *
 * 🔍 Intuition:
 * - For every index i:
 *      - If nums[i] == 1, keep moving j forward and count
 *        how many consecutive 1s we get.
 *      - Track the maximum over all such segments.
 *
 * ⚙️ Time Complexity:  O(n²)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &nums) {
    int n = nums.size();
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (nums[j] == 1) count++;
            else break;  // streak broken
        }
        maxi = max(maxi, count);
    }

    return maxi;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Max Consecutive Ones (Brute): " << maxConsecutiveOnes(nums) << endl;

    return 0;
}


/************************************************************
 * 🟢 Approach 2 — Optimal (Single Pass O(n))
 *
 * 🔍 Intuition:
 * - Traverse the array once.
 * - Maintain a current streak counter:
 *      - If nums[i] == 1 → increase current streak.
 *      - Else → reset current streak to 0.
 * - Maintain a global maximum of the streak length.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &nums) {
    int maxi = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 0;
        }
    }

    return maxi;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    cout << "Max Consecutive Ones (Optimal): " << maxConsecutiveOnes(nums) << endl;

    return 0;
}
