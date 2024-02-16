class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto maxi = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        for(auto c: candies){
            result.push_back(c + extraCandies >= maxi);
        }
        return result;
    }
};