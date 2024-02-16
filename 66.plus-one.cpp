class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool udhar = false;
        for(int i=digits.size()-1;i>=0;i--){
            digits[i]++;
            udhar = false;
            if(digits[i]%10 != 0) break;
            digits[i] = 0;
            udhar = true;
        }
        if(udhar) digits.insert(digits.begin(), 1);
        return digits;
    }
};