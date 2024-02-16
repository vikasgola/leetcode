class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> rowold;
        rowold.push_back({1});
        for(int i=0;i<rowIndex;i++){
            vector<int> row;
            row.push_back(1);
            for(int j=0;j<rowold.size()-1;j++){
                row.push_back(rowold[j]+rowold[j+1]);
            }
            row.push_back(1);
            rowold = row;
        }
        return rowold;
    }
};