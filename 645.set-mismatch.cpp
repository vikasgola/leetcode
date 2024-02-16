class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        bool freq[1000000] = {false};
        int dup, sum = 0;
        for(auto &n: nums){
            if(freq[n]) dup = n;
            sum += n;
            freq[n] = true;
        }
        return {dup, dup + (int)(nums.size()*(nums.size()+1)/2 - sum)};
    }
};