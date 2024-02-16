class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int a,b;
        vector<string> ans;
        if(nums.size() == 0) return {};
        a = b = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1 == nums[i]) b = nums[i];
            else{
                if(a == b) ans.push_back(to_string(a));
                else ans.push_back(to_string(a)+"->"+to_string(b));
                a = b = nums[i];
            }
        }
        if(a == b) ans.push_back(to_string(a));
        else ans.push_back(to_string(a)+"->"+to_string(b));
        return ans;
    }
};