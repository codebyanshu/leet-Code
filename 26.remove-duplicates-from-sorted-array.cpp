/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> stack;
        int top = -1;
        int n = nums.size();
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (top >= 0 && stack[top] == nums[i])
            {
                continue;
            }
            else
            {
                top++;
                k++;
                stack.push_back(nums[i]);
            }
        }
        for (int i = 0; i <= top; i++)
        {
            nums[i] = stack[i];
        }
        return k;
    }
};
// @lc code=end

