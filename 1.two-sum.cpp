class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> exists;
        for(int i=0;i<nums.size();i++){
            auto n = exists.find(target-nums[i]);
            if(n != exists.end()) return {exists[target-nums[i]], i};
            exists[nums[i]] = i;
        }
        return {};
    }
};