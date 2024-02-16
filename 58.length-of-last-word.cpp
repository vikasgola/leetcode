class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.length() > 0 && s[s.length()-1] == ' ') s = s.substr(0, s.length()-1);
        return s.length() - s.rfind(" ")-1;
    }
};