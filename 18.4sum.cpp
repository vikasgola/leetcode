class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> res;
        vector<int> sums;
        vector<pair<int,int>> sums_i;
        for(long long i=0;i<nums.size();i++){
            for(long long j=i+1;j<nums.size();j++){
                sums.push_back(nums[i]+nums[j]);
                sums_i.push_back({i,j});
            }
        }

        for(long long i=0;i<sums.size();i++){
            for(long long j=i+1;j<sums.size();j++){
                if(sums[i]+sums[j] == target &&
                    sums_i[i].first != sums_i[j].first &&
                    sums_i[i].first != sums_i[j].second &&
                    sums_i[i].second != sums_i[j].first &&
                    sums_i[i].second != sums_i[j].second){
                    pair<int, int> in1 = sums_i[i], in2 = sums_i[j];
                    vector<int> quad = {nums[in1.first], nums[in1.second], nums[in2.first], nums[in2.second]};
                    sort(quad.begin(), quad.end());
                    res.insert(quad);
                }
            }
        }
        vector<vector<int>> ans(res.begin(), res.end());
        return ans;
    }
};