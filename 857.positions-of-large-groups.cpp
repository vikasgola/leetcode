class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int a =S[0], count =1;
        vector<vector<int>> ans;
        for(int i=1; i< S.length(); i++)
            if(a == S[i]){
                count++;
            } else {
                vector<int> t= {i-count, i-1};
                if(count > 2)
                ans.push_back(t);
                count = 1;
                a = S[i];
            }

        vector<int> t= {S.length()-count, S.length()-1};
                if(count > 2)
                ans.push_back(t);


        return ans;
        }
};