class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 1;
        int curr = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]) curr++;
            else{
                ans = max(ans, curr);
                curr = 1;
            }
        }
        ans = max(ans, curr);
        return ans;
    }
};