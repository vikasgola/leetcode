class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(int i=0;i<s.length();i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                t += s[i];
            else if (s[i] >= 'A' && s[i] <= 'Z')
                t += s[i] - 'A' + 'a';
        }
        int i=0, j=t.length()-1;
        while(i<j){
            if(t[i] != t[j]) return false;
            i++;j--;
        }
        return true;
    }
};