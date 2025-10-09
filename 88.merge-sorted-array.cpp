/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int j = 0;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (nums1[i] == 0 && j < n)
            {
                nums1[i] = nums2[j];
                j++;
            }
        }
        m = m + n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (nums1[j] > nums1[j + 1])
                {
                    int temp = nums1[j];
                    nums1[j] = nums1[j + 1];
                    nums1[j + 1] = temp;
                }
            }
        }
    }
};
// @lc code=end

