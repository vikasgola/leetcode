class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> numss(nums.begin(), nums.end());
        auto max1 = max_element(numss.begin(), numss.end());

        if(numss.size() == 1 || numss.size() ==2 ){
            return *max1;
        }
        numss.erase(numss.find(*max1));

        auto max2 = max_element(numss.begin(), numss.end());
        numss.erase(numss.find(*max2));
        auto max3 = max_element(numss.begin(), numss.end());
        return *max3;

    }
};