/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string xs = to_string(x);
        for(int i=0;i<xs.size()/2;i++){
            if(xs[i] != xs[xs.size()-i-1]) return false;
        }
        return true;
    }
};
// @lc code=end

