class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i-1][0] == intervals[i][0]){
                continue;
            }else{
                if(intervals[i-1][1] < intervals[i][0]){
                    ans.push_back(intervals[i-1]);
                }else{
                    intervals[i][0] = intervals[i-1][0];
                    intervals[i][1] = max(intervals[i-1][1], intervals[i][1]);
                }
            }
        }
        ans.push_back(intervals[intervals.size()-1]);
        return ans;
    }
};