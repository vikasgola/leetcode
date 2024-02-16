class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=0, r = nums.size()-1, sum;
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            vector<int> triplet;
            l = i+1;
            r = nums.size()-1;
            // cout<<l<<" "<<r<<endl;
            while(l<r){
                sum = nums[i]+nums[l]+nums[r];
                if(sum == 0){
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[l]);
                    triplet.push_back(nums[r]);
                    ans.insert(triplet);
                    triplet.clear();
                    l++; r--;
                }else if(sum < 0){l++;}
                else{r--;}
            }
        }
        vector<vector<int>> ans2(ans.begin(), ans.end());
        return ans2;
    }
};
