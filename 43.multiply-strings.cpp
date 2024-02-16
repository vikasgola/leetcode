class Solution {
public:

    string mul(string num1, int n){
        string ans = "";
        int carry = 0;
        for(int i=num1.size()-1;i>=0;i--){
            int mul = n*(num1[i]-48) + carry;
            ans = to_string(mul%10)+ans;
            carry = mul/10;
        }
        if(carry > 0) ans = to_string(carry) + ans;
        return ans;
    }

    string add(string num1, string num2){
        string ans = "";
        int sum = 0, carry = 0;
        while(num1.size()>0 || num2.size()>0 || carry>0){
            sum = 0;
            if(num1.size()>0){
                sum += num1[num1.size()-1]-48;
                num1.pop_back();
            }
            if(num2.size()>0){
                sum += num2[num2.size()-1]-48;
                num2.pop_back();
            }
            sum += carry;
            ans = to_string(sum%10) + ans;
            carry = sum/10;
        }
        return ans;
    }

    string multiply(string num1, string num2) {
        if(num2 == "0" || num1 == "0") return "0";
        string ans = "";
        string shifter = "";
        for(int i=num2.size()-1;i>=0;i--){
            char c = num2[i];
            ans = add(ans, mul(num1, c-48)+shifter);
            shifter += "0";
        }
        return ans;
    }
};