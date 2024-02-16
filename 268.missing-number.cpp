class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max = *std::max_element(nums.begin(), nums.end());
        bool A[max+1] = {false};

        for(int i=0;i<nums.size() ;i++){
            A[nums[i]] = true;
        }

        for(int i=0;i<max+1;i++){
            if(A[i] == false){
                return i;
            }
        }
        return max+1;
    }
};