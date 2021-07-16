/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.length() > 0 && s[s.length()-1] == ' ') s = s.substr(0, s.length()-1);
        return s.length() - s.rfind(" ")-1;
    }
};
// @lc code=end

