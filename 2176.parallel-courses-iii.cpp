class Solution {
public:
    int dfs(int node, map<int, vector<int>>& edges, vector<int>& time, vector<int>& dp){
        if(dp[node] != 0) return dp[node];

        int timetook, maxtimetook = time[node-1], ctimetook = time[node-1];
        for(auto &e: edges[node]){
            timetook = dfs(e, edges, time, dp);
            maxtimetook = max(timetook+ctimetook, maxtimetook);
        }
        return dp[node] = maxtimetook;
    }

    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        map<int, vector<int>> edges;
        for(auto &e: relations){
            edges[e[0]].push_back(e[1]);
        }
        int timetook = 0, maxtimetook = 0;
        vector<int> dp(n+1, 0);
        for(int i=1;i<=n;i++){
            timetook = dfs(i, edges, time, dp);
            maxtimetook = max(timetook, maxtimetook);
        }
        return maxtimetook;
    }
};