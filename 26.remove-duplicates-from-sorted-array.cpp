/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int end = !nums.empty();
        int lastseen = -101;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[end-1] ){
                nums[end++] = nums[i]; 
            }
        }
        return end;
    }
};
// @lc code=end

