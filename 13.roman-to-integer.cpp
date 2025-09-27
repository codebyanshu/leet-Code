/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        long num = 0;
        // cout<<s.size();

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'I')
            {
                num += 1;
            }
            else if (s[i] == 'V')
            {
                if (i > 0 && s[i - 1] == 'I')
                {
                    num -= 1;
                    i--;
                }

                num += 5;
            }
            else if (s[i] == 'X')
            {
                if (i > 0 && s[i - 1] == 'I')
                {
                    num -= 1;
                    i--;
                }

                num += 10;
            }
            else if (s[i] == 'L')
            {
                if (i > 0 && s[i - 1] == 'X')
                {
                    num -= 10;
                    i--;
                }

                num += 50;
            }
            else if (s[i] == 'C')
            {
                if (i > 0 && s[i - 1] == 'X')
                {
                    num -= 10;
                    i--;
                }

                num += 100;
            }
            else if (s[i] == 'D')
            {
                if (i > 0 && s[i - 1] == 'C')
                {
                    num -= 100;
                    i--;
                }

                num += 500;
            }
            else if (s[i] == 'M')
            {
                if (i > 0 && s[i - 1] == 'C')
                {
                    num -= 100;
                    i--;
                }

                num += 1000;
            }
        }
        return num;
    }
};
// @lc code=end
