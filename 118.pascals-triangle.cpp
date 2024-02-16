class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        pascal.push_back({1});
        for(int i=0;i<numRows-1;i++){
            vector<int> row;
            row.push_back(1);
            for(int j=0;j<pascal[i].size()-1;j++){
                row.push_back(pascal[i][j]+pascal[i][j+1]);
            }
            row.push_back(1);
            pascal.push_back(row);
        }
        return pascal;
    }
};