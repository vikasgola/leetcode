class Solution {
public:
    int solve(vector<vector<int>> &events, int index, int chosed, vector<vector<int>> &dp){
        if(dp[index][chosed] != -1) return dp[index][chosed];
        if(chosed == 2 || index+1 > events.size()){ dp[index][chosed]=0; return 0;}
        int notpicked = solve(events, index+1, chosed, dp);
        dp[index+1][chosed] = notpicked;
        vector<int> ans = {events[index][1], INT_MAX, INT_MAX};
        int next_index = upper_bound(
            events.begin(), events.end(), ans
        ) - events.begin();
        dp[next_index][chosed+1] = solve(events, next_index, chosed+1, dp);
        int picked = events[index][2] + dp[next_index][chosed+1];
        return max(picked, notpicked);
    }
    int maxTwoEvents(vector<vector<int>>& events) {
        vector<vector<int>> dp(events.size()+1, vector<int>(3, -1));
        sort(events.begin(), events.end());
        return solve(events, 0, 0, dp);
    }
};