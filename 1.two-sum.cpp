/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> cont;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            if(cont.count(target-n)) return {i, cont[target-n]};
            cont[n] = i;
        }
        return {};
    }
};
// @lc code=end

