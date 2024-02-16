class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string sum = "";
        int alen = a.length();
        int blen = b.length();
        for(int i = 0; i < max(alen, blen); i++){
            carry = (alen-i-1 >= 0 ? a[alen-i-1] : '0') + (blen-i-1 >= 0 ? b[blen-i-1] : '0') - 2*'0' + carry;
            if(carry%2){
                sum = '1' + sum;
                carry /= 2;
            }else{
                sum = '0' + sum;
                carry /= 2;
            }
        }
        if(carry) sum = '1' + sum;
        return sum;
    }
};