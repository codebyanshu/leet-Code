/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
// Make your own this method take high time and space complextiy;
class Solution
{
public:
    int top = 0;
    vector<int> res;
    int isrepeat(string str, char ch)
    {
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {

            if (str[i] == ch)
            {
                count++;
            }
            if (count == 2)
            {
                res.push_back(top - 1);
                return 1;
            }
        }
        return -1;
    }

    int lengthOfLongestSubstring(string s)
    {

        if (s == " " || s.length() == 1)
        {
            return 1;
        }

        string stack;
        int f = 0;
        int i = 0;

        int key = 0;
        while (i < s.length())
        {

            stack.push_back(s[i]);
            ++top;

            if (isrepeat(stack, s[i]) == 1)
            {
                top = 0;
                f++;
                i = f - 1;
                stack = "";
            }
            else
            {
                key = top;
            }

            i++;
        }

        for (int i = 0; i < res.size(); i++)
        {
            if (key < res[i])
            {
                key = res[i];
            }
        }
        return key;
    }
};
// @lc code=end
