class Solution {
public:
    int scoreOfParentheses(string s) {
        if(s == "()") return 1;
        int add = 0, ans = 0, k = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                add++;
            }else{
                add--;
            }
            if(add == 0){
                if(i != s.length()-1 || k != 0){
                    ans += scoreOfParentheses(s.substr(k, i+1-k));
                    k = i+1;
                }else ans += 2*scoreOfParentheses(s.substr(1, i-1));
            }
        }
        return ans;
    }
};