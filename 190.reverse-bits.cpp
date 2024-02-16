class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int bcount = 0;
        while(n){
            ans = ans*2 + n%2;
            n = n/2;
            bcount++;
        }
        ans = ans* pow(2, 32-bcount);
        return ans;
    }
};