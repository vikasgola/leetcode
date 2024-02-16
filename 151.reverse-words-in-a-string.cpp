class Solution {
public:
    string reverseWords(string s) {
        string ans;

        int i = 0;
        string word = "";
        while(i<s.length()){
            if(s[i] == ' '){
                if(word != ""){
                    if(ans != "") ans = " " + ans;
                    ans = word + ans;
                }
                word = ""; i++; continue;
            }
            word = word + s[i++];
        }

        if(word != ""){
            if(ans != "") ans = " " + ans;
            ans = word + ans;
        }
        return ans;
    }
};