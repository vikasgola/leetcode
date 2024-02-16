#include<vector>
using namespace std;

class Solution {
public:
    vector<int> get_factors(int n){
        vector<int> factors;
        for(auto i=1;i<=n;i++){
            if(n%i == 0) factors.push_back(i);
        }
        return factors;
    }

    int kthFactor(int n, int k) {
        auto factors = get_factors(n);
        if(--k < factors.size()) return factors[k];
        return -1;
    }
};
