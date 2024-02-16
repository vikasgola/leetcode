class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        if(n <= 1) return 0;
        s += s;
        int flips1 = 0, flips2 = 0, i = 0;
        char x1 = '0', x2 = '1';
        int ans = INT_MAX;
        for(;i<2*n;i++){
            if(s[i] != x1) flips1++;
            if(s[i] != x2) flips2++;
            x1 = x1 == '0'? '1': '0';
            x2 = x2 == '0'? '1': '0';
            if(i >= n){
              if(s[i-n] != ((i-n) % 2 ? '1' : '0')) flips1--;
              if(s[i-n] != ((i-n) % 2 ? '0' : '1')) flips2--;
              ans = min({ans, flips1, flips2});
            }
        }
        return ans;
    }
};