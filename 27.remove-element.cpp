/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int top = 0; 
        vector <int>stack;
        for (int i = 0; i < int(nums.size()); i++)
        {
            if (top >= 0 && nums[i] == val)
            {
               continue;
            }
            else
            {
                stack.push_back(nums[i]);
                top++;
            }   
        }
        for (int i = 0; i < top; i++)
        {
            nums[i] = stack[i];
        }
        stack.clear();
      
        return top;       
        
    }
};
// @lc code=end

