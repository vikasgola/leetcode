class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        sort(nums.begin(), nums.end());
        int maxever = 0, maxc = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]) continue;
            else if(nums[i-1]+1 == nums[i]) maxc++;
            else{
                maxever = max(maxever, maxc); maxc = 1;
            }
        }
        maxever = max(maxever, maxc);
        return maxever;
    }
};