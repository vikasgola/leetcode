/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans = true;
        for(auto c: s){
            if(c == '(' || c == '[' || c == '{') st.push(c);
            else if(c == ')')
                if(!st.empty() && st.top() == '(') st.pop();
                else return false;
            else if(c == ']')
                if(!st.empty() && st.top() == '[') st.pop();
                else return false;
            else if(!st.empty() && st.top() == '{') st.pop();
                else return false;
        }
        if(st.empty()) return true;
        else return false;
    }
};
// @lc code=end

