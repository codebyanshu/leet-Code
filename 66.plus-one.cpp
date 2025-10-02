/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> result(n+1,0);
        
        for (int i = n-1; i >= 0; i--)
        {
            digits[i]++;
            if (digits[i] < 10)
            {
                return digits;
                
            }
            else
            {
                digits[i] = 0;
            }
        }
        result[0] = 1;
        return result;
    }
};
// @lc code=end

