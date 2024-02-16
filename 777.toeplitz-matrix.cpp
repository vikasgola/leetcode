class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        if(matrix.size() < 2) return true;
        for(int i=0;i<matrix.size()-1;i++){
            vector<int> curr = matrix[i];
            vector<int> upcoming = matrix[i+1];
            for(int j=0;j<curr.size()-1;j++){
                if(curr[j] != upcoming[j+1]) return false;
            }
        }
        return true;
    }
};