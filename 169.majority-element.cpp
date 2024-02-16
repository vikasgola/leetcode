class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0], count = 0;
        for(auto &n: nums){
            if(maj == n){
                count++;
            }else{
                count--;
                if(count == 0){
                    maj = n;
                    count++;
                  }
            }
        }
        return maj;
    }
};