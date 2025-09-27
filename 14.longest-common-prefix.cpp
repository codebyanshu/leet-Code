/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
        {
            return "";
            
        }

        string v1;

        for (int i = 0; i < strs[0].size(); i++)
        {
            bool same = true;
            for (int j = 1; j < strs.size(); j++)
            {
                if (i >= strs[j].size() || strs[j][i] != strs[0][i])
                {
                    same = false;
                    break;
                }
            }

            if (same){
                v1 += strs[0][i];
        }
            else{
                break;
            }
        }

        return v1;
    }
};
// @lc code=end

