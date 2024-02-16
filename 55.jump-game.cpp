class Solution {
public:
    bool canJump(vector<int>& nums) {
        int t=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i] == 0){
                if(t ==-1) t = i;
            }
            if(t!=-1 && nums[i] - nums[t] > t-i) t=-1;
        }
        return t == -1;
    }

};