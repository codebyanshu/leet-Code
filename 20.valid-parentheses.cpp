/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        string arr;
        int top = -1;
        bool find = true;

        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case '(':
                top++;
                arr.push_back('(');
                find = false;
                break;

            case ')':
                if (top >= 0 && arr[top] == '(')
                {
                    arr.pop_back();
                    top--;
                    find = true;
                }
                else
                {
                    return false;
                }
                break;

            case '[':
                top++;
                arr.push_back('[');
                find = false;
                break;

            case ']':
                if (top >= 0 && arr[top] == '[')
                {
                    arr.pop_back();
                    top--;
                    find = true;
                }
                else
                {
                    return false;
                }
                break;

            case '{':
                top++;
                arr.push_back('{');
                find = false;
                break;

            case '}':
                if (top >= 0 && arr[top] == '{')
                {
                    arr.pop_back();
                    top--;
                    find = true;
                }
                else
                {
                    return false;
                }
                break;

            default:
                return false; 
            }
        }

        return find && (top == -1);
    }
};

// @lc code=end

