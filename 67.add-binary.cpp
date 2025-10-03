/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
      int carry = 0;
      int top = 0;
      string res;
      for (int i = a.length() - 1; i >= 0; i--)
      {
        for (int j = b.length() - 1; j >= 0; j--)
        {
          if (a[i] == '0' && b[j] == '0')
          {
            res.insert(top, "0");
            top++;
          }
          else if (a[i] == '1' && b[j] == '0')
          {
            res.insert(top, "1");
            top++;
            carry = 0;
          }
          else if (a[i] == '0' && b[j] == '1')
          {
            res.insert(top, "1");
            top++;
            carry = 0;
          }
          else if (a[i] == '1' && b[j] == '1')
          {
            carry = 1;
            res.insert(top, "0");
            top++;
          }
          i--;
          if (i == -1 || j == -1)
          {
            break;
          }
        }
        if (a[i] == '1' && carry == 1)
        {
          res.insert(top, "0");
          top++;
          carry = 1;
        }
        else if (a[i] == '1' && carry == 0)
        {
          res.insert(top, "1");
          top++;
          carry = 0;
        }
        else if (a[i] == '0' && carry == 0)
        {
          res.insert(top, "0");
          top++;
          carry = 0;
        }
        else if (a[i] == '0' && carry == 1)
        {
          res.insert(top, "1");
          top++;
          carry = 0;
        }
      }
      if (carry)
      {
        res.insert(0, "1");
      }
      cout << res;
    }
};
// @lc code=end

