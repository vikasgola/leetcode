class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<bool>> connects(n, vector<bool>(n, false));
        vector<int> count(n, 0);
        for(auto &g:roads){
            connects[g[0]][g[1]] = true;
            connects[g[1]][g[0]] = true;
            count[g[0]]++;
            count[g[1]]++;
        }
        int ans = 0, s;
        for(int i=0;i<connects.size();i++){
            for(int j=i+1;j<connects.size();j++){
                s = count[i]+count[j] - (connects[i][j] == true);
                ans = max(ans, s);
            }
        }
        return ans;
    }
};