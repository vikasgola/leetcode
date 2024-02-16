class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            int j = i;
            while(j<matrix.size()){
                swap(matrix[i][j], matrix[j][i]);
                j++;
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};