/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty()) return 0;
        int l=0, r=nums.size(), mid;
        while(l<r){
            mid=(l+r)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        return l;
    }
};
// @lc code=end

