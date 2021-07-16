/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        bool neg = x < 0;
        x = abs(x);
        while (x){
            ans = 10*ans + (x%10);
            x /= 10;
            // cout<<ans<<": "<<x<<endl;
            if(ans < 0 || (x && 
                (ans > INT_MAX/10 || (ans == INT_MAX/10 && x > INT_MAX%10) )
            ))
                return 0;
        }
        return neg ? -1*ans : ans;
    }
};
// @lc code=end

