class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        for(int i=0;i<prices.size();i++){
            int p = prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(prices[j] <= p) {p -= prices[j]; break;}
            }
            ans.push_back(p);
        }
        return ans;
    }
};