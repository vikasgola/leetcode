class Solution {
public:
    void generate(vector<int>& candidates, int target, set<vector<int>>& ans, int index, int sum, vector<int> curr){
        if(sum == target){
            ans.insert(curr);
            return;
        }
        if(sum > target) return;

        if(index < candidates.size()){
            generate(candidates, target, ans, index+1, sum, curr);
            if(candidates[index] <= target){
                curr.push_back(candidates[index]);
                generate(candidates, target, ans, index+1, sum+candidates[index], curr);
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        auto totalsum = accumulate(candidates.begin(), candidates.end(), 0);
        if(totalsum == target) return {candidates};
        if(totalsum < target) return {};
        sort(candidates.begin(), candidates.end());
        if(candidates[0] == candidates[candidates.size()-1]){
            if(candidates[0]*(target/candidates[0]) == target){
                vector<int> temp;
                for(int i=0;i<target/candidates[0];i++){
                    temp.push_back(candidates[0]);
                }
                ans.insert(temp);
            }else return {};
        }else{
            generate(candidates, target, ans, 0, 0, {});
        }
        vector<vector<int>> ans2(ans.begin(), ans.end());
        return ans2;
    }
};