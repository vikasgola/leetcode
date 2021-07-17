/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long long xsqrt = x;
        while(xsqrt*xsqrt > x ){
            xsqrt = (xsqrt + x/xsqrt)/2;
        }
        return (int)xsqrt;
    }
};
// @lc code=end

