/************************************************************
 * 🧩 Problem: Move Zeroes to End (Keeping Order of Non-zero)
 *
 * ----------------------------------------------------------
 * Given an array, move all zeroes to the end while
 * maintaining the order of non-zero elements.
 *
 * Example:
 *   Input:  [0, 1, 0, 3, 12]
 *   Output: [1, 3, 12, 0, 0]
 *
 ************************************************************/


/************************************************************
 * 🟠 Approach 1 — Brute Force (Extra Array)
 *
 * 🔍 Intuition:
 * - Store all non-zero elements in a temporary vector.
 * - Copy them back.
 * - Fill the rest with zeroes.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(n)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    vector<int> temp;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0)
            temp.push_back(nums[i]);
    }

    int k = 0;
    for(int i = 0; i < temp.size(); i++)
        nums[k++] = temp[i];

    while(k < nums.size())
        nums[k++] = 0;
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    cout << "After moving zeroes (Brute Force): ";
    for(int x: nums) cout << x << " ";
    cout << endl;

    return 0;
}

/************************************************************
 * 🟢 Approach 2 — Optimal (Two-Pointer Swap Technique)
 *
 * 🔍 Intuition:
 * - Maintain pointer j where next non-zero should go.
 * - Traverse array with i:
 *      If nums[i] != 0 → swap(nums[i], nums[j]); j++
 * - Automatically pushes zeroes toward the end.
 *
 * ⚙️ Time Complexity:  O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    cout << "After moving zeroes: ";
    for(int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
