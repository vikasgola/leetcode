class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int l=0,m=matrix[0].size()-1,p=matrix.size()-1,q=0;
        vector<int> ans;
        while(1){
            for(int i=q;i<=m;i++){
                ans.push_back(matrix[l][i]);
            }
            l++;
            if(ans.size() == matrix.size()*matrix[0].size()) return ans;
            for(int i=l;i<=p;i++){
                ans.push_back(matrix[i][m]);
            }
            m--;
            if(ans.size() == matrix.size()*matrix[0].size()) return ans;
            for(int i=m;i>=q;i--){
                ans.push_back(matrix[p][i]);
            }
            p--;
            if(ans.size() == matrix.size()*matrix[0].size()) return ans;
            for(int i=p;i>=l;i--){
                ans.push_back(matrix[i][q]);
            }
            q++;
            if(ans.size() == matrix.size()*matrix[0].size()) return ans;
        }
        return ans;
    }
};