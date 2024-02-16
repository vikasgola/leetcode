class Solution {
public:
    void permutate(vector<int> nums, int j, set<vector<int>> &ans){
        if(j == nums.size()) ans.insert(nums);

        for(int i=j;i<nums.size();i++){
            swap(nums[i], nums[j]);
            permutate(nums, j+1, ans);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        permutate(nums, 0, ans);
        vector<vector<int>> ans2(ans.begin(), ans.end());
        return ans2;
    }
};