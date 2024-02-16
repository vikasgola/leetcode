class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> B;
        for_each(A.begin(), A.end(), [&B](int a){if(a%2==0)B.push_back(a);});
        for_each(A.begin(), A.end(), [&B](int a){if(a%2==1)B.push_back(a);});

    return B;
        }
};