class Solution {
public:

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto &a:A){
            reverse(a.begin(), a.end());
            for_each(a.begin(), a.end(), [](int &i){i = 1-i;});
        }

        return A;
    }
};