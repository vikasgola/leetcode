/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char c;
        string prefix = "";
        int len = 0;
        while(true){
            len = prefix.length();
            c = strs[0][len];
            for(string s: strs){
                if(len >= s.length() || c != s[len]) return prefix;
            }
            prefix += c;
        }
    }
};
// @lc code=end

