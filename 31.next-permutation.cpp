class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pinpoint = nums.size();
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                pinpoint = i;
                break;
            }
        }
        if(pinpoint == nums.size()){
            sort(nums.begin(), nums.end());return;
        }
        int greater = nums.size()-1;
        for(int i=pinpoint;i<nums.size()-1;i++){
            if(nums[i+1] <= nums[pinpoint-1]){
                greater = i;
                break;
            }
        }
        swap(nums[pinpoint-1], nums[greater]);
        sort(nums.begin()+pinpoint, nums.end());
    }
};


// 1234

// 153762
// 156237
