class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        set<long long> s;
        for(int i=1;i<nums.size();i++){
            if(s.find(nums[i-1]+nums[i]) != s.end()){
                return true;
            }
            s.insert(nums[i-1]+nums[i]);
        }
        return false;
    }
};