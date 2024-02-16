class Solution {
public:

    void generate(vector<int>& candidates, vector<int> curr, int target, vector<vector<int>>& ans, int sum, int t){
        if( sum == target){
            ans.push_back(curr);
            return;
        }
        if(sum > target) return;

        for(int i=t;i<candidates.size();i++){
            auto n = candidates[i];
            curr.push_back(n);
            generate(candidates, curr, target, ans, sum+n, i);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        generate(candidates, {}, target, ans, 0, 0);
        return ans;
    }
};