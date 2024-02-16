class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int summation = 0;
        int expected = 0, ans = 0;
        for(int i=0;i<flips.size();i++){
            summation += flips[i];
            expected += i+1;
            ans += summation == expected;
        }
        return ans;
    }
};