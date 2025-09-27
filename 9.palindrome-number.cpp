/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
       long checkVar = x;
         long palidrom = 0;
        while (x!=0 && x >0)
        {
            long temp = x % 10;
            x = x / 10;
            palidrom = palidrom * 10 + temp;
        }
        if (palidrom == checkVar)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
