#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool is_edge(pair<int, int> loc, int m, int n){
        if(loc.first == -1 || loc.second == -1) return true;
        if(loc.first == m || loc.second == n) return true;
        return false;
    }

    bool dfs(vector<vector<bool>>& is_visited, vector<vector<int>>& grid, pair<int, int> start){
        cout<<start.first<<" | "<<start.second<<endl;
        is_visited[start.first][start.second] = true;
        pair<int, int> neighbours[] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

        bool result = true;
        for(auto neighbour: neighbours){
            pair<int, int> t = {start.first+neighbour.first, start.second+neighbour.second};
            if(is_edge(t, is_visited.size(), is_visited[0].size())){
                result = false;
            }else if(grid[t.first][t.second] == 0 && !is_visited[t.first][t.second]){
                result &= dfs(is_visited, grid, t);
            }
        }
        return result;
    }

    int closedIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> is_visited(grid.size(), vector<bool>(grid[0].size(), false));
        int island_counts = 0;

        for(auto i=0;i<grid.size();i++){
            for(auto j=0;j<grid[i].size();j++){
                if(grid[i][j] == 0 && !is_visited[i][j]){
                    island_counts += dfs(is_visited, grid, {i, j});
                }
            }
        }
        return island_counts;
    }
};