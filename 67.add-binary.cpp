/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution
{
public:
  string addBinary(string a, string b)
  {
    int lenOfA = a.length();
    int lenOfB = b.length();
    char carry = '0';
    string res;

    int i = lenOfA - 1;
    int j = lenOfB - 1;

    while (i >= 0 || j >= 0)
    {
      char bitA = (i >= 0) ? a[i] : '0';
      char bitB = (j >= 0) ? b[j] : '0';

      if (bitA == '0' && bitB == '0')
      {
        if (carry == '1')
        {
          res.insert(0, 1, '1');
          carry = '0';
        }
        else
        {
          res.insert(0, 1, '0');
        }
      }
      else if ((bitA == '1' && bitB == '0') || (bitA == '0' && bitB == '1'))
      {
        if (carry == '1')
        {
          res.insert(0, 1, '0');
          carry = '1';
        }
        else
        {
          res.insert(0, 1, '1');
          carry = '0';
        }
      }
      else if (bitA == '1' && bitB == '1')
      {
        if (carry == '1')
        {
          res.insert(0, 1, '1');
          carry = '1';
        }
        else
        {
          res.insert(0, 1, '0');
          carry = '1';
        }
      }

      i--;
      j--;
    }

    if (carry == '1')
      res.insert(0, 1, '1');

    return res;
  }
};

// @lc code=end

