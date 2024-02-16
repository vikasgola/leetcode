class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        bool progress, rot, completed;
        int ans = 0;
        while(true){
            vector<vector<int>> grid2(grid);
            progress = false;
            completed = true;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[i].size();j++){
                    rot = false;
                    if(grid[i][j] == 1){
                        completed = false;
                        rot |= j-1 >= 0 && grid[i][j-1] == 2 ? true: false;
                        rot |= j+1 < grid[i].size() && grid[i][j+1] == 2 ? true: false;
                        rot |= i-1 >= 0 && grid[i-1][j] == 2 ? true: false;
                        rot |= i+1 < grid.size() && grid[i+1][j] == 2 ? true: false;
                    }
                    if(rot) grid2[i][j] = 2;
                    progress |= rot;
                }
            }
            if(!completed && !progress) return -1;
            if(!progress) break;
            ans++;
            grid = grid2;
        }
        return ans;
    }
};