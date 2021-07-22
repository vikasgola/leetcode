/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, bool> have;
        for(int i=0;i<=k;i++){
            if(i >= nums.size()) return false;
            if(have.find(nums[i]) != have.end())
                return true;
            have[nums[i]] = true;
        }
        
        for(int i=1;i<nums.size()-k;i++){
            have[nums[i-1]] = false;
            if(have.find(nums[i+k]) != have.end() && have[nums[i+k]]) return true;
            have[nums[i+k]] = true;
        }
        return false;
    }
};
// @lc code=end

