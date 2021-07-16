/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs = INT_MIN;
        int max_ending = 0;
        for(int n: nums){
            max_ending += n;
            if(max_ending > maxs) maxs = max_ending;
            if(max_ending < 0) max_ending = 0;
        }
        return maxs;
    }
};
// @lc code=end

