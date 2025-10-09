/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string opo;
        for (int i = 0; i < s.length(); i++)
        {
            char a = s[i];
            if (s[i] >= 48 && s[i] <= 57)
            {
                opo.push_back(a);
            }
            else
            {
                a = tolower(a);
            }

            if (a == ' ')
            {
                continue;
            }
            else if ((a >= 97 && a <= 122))
            {
                opo.push_back(a);
            }
        }
        string res;

        for (int i = opo.length() - 1; i >= 0; i--)
        {
            char b = opo[i];
            res.push_back(b);
        }
        if (res == opo)
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

