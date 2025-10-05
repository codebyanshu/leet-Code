/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {

        // It take high time complexity.
        // int odd = 1;
        // int count = 0;

        // while (x > 0)
        // {
        //     x -= odd;
        //     odd += 2;
        //     if (x >= 0)
        //     {
        //         count++;
        //     }
        // }
        // return count;

        // M->2
        int low = 1, high = x;
        int ans = 0;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            long long val = mid * mid;

            if (val == x)
            {
                return mid;
            }
            else if (val < x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return ans;
    }
};
// @lc code=end

