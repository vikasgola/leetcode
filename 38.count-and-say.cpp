class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string out = countAndSay(n-1);
        char t = out[0];
        int c = 0;
        string ans = "";
        for(auto cc:out){
            if(t == cc){c++;}
            else{
                ans += (char)(c + 48);
                ans += t;
                t = cc;
                c = 1;
            }
        }

        ans += (char)(c + 48);
        ans += t;
        return ans;
    }
};