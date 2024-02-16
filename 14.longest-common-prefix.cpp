class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char c;
        string prefix = "";
        int len = 0;
        while(true){
            len = prefix.length();
            // if(len >= s.length()) return prefix;
            c = strs[0][len];
            for(string s: strs){
                if(len >= s.length() || c != s[len]) return prefix;
            }
            prefix += c;
        }
    }
};