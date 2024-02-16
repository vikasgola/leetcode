class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for_each(A.begin(), A.end(), [](int &a){a=a*a;});
        sort(A.begin(), A.end());
        return A;
    }
};