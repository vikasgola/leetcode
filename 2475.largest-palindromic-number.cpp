class Solution {
public:
    string largestPalindromic(string num) {
        int counts[10] = {0};
        string ans = "";
        for(int i=0;i<num.size();i++){
            counts[num[i] - '0'] += 1;
        }

        for(int i=9;i>=0;i--){
            if(counts[i] > 1 && !(i== 0 && ans.size() == 0) ){
                ans = ans + string(counts[i]/2, '0'+i);
                counts[i] = counts[i]%2;
            }
        }
        bool odd = false;
        for(int i=9;i>=0;i--){
            if(counts[i] > 0){
                ans = ans + to_string(i);
                counts[i] = 0;
                odd = true;
                break;
            }
        }
        if(odd) ans += string(ans.rbegin()+1, ans.rend());
        else ans += string(ans.rbegin(), ans.rend());
        return ans;
    }
};