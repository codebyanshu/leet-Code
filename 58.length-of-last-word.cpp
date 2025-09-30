/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                count = count + 1;
            }
            else if (s[i] == ' ' && s[i + 1] != ' ' && i < s.size() - 1)
            {
                return count;
            }
            else
            {
                continue;
            }
        }
       return count;
    }
};
// @lc code=end
