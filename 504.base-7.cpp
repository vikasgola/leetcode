class Solution {
public:
    string convertToBase7(int num) {
        int rem, quo;
        string ans = "";
        if(num == 0) return "0";
        bool neg = num < 0;
        num = abs(num);
        while(num){
            quo = num/7;
            rem = num%7;
            ans = to_string(rem) + ans;
            num = quo;
        }
        if(neg) ans = "-"+ans;
        return ans;
    }
};