/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int k = -1;
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0])
            {
                k = i;
                for (int j = 0; j < needle.size(); j++)
                {
                    if (haystack[i] != needle[j])
                    {
                        i = k;
                        k = -1;
                        break;
                    }
                    else if (j == needle.size() - 1 && haystack[i] == needle[j])
                    {
                        return k;
                    }
                    i++;
                }
            }
        }

        return k;
    }
};
// @lc code=end

