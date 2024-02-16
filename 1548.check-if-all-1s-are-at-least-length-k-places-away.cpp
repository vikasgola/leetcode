class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int t = -1;
        for(auto n: nums){
            if(t == -1){if(n) t=0;}
            else{
                if(n){if(t >= k) t = 0; else return false;}
                else t++;
            }
        }
        return true;
    }
};