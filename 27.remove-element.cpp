class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto end = remove(nums.begin(), nums.end(), val);
        return end - nums.begin();
    }
};