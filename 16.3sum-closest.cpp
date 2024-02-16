class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int l=0, r = nums.size()-1, sum, ans = 1e5;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            l = i+1;
            r = nums.size()-1;
            while(l<r){
                sum = nums[i]+nums[l]+nums[r];
                if(sum == target){
                    return sum;
                }else if(sum < target){
                    l++;
                }else{
                    r--;
                }
                if(abs(target-sum) < abs(ans-target)){
                    ans = sum;
                }
            }
        }
        return ans;
    }
};