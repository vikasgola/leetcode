class Solution {
public:
    int jump(vector<int>& nums) {
        int index = 0, jumps = 0;
        while(index < nums.size()-1){
            int max_ele=0, max_index = -1, t=nums[index]-1;
            for(int i=index+1;i<=index + nums[index];i++){
                if(i >= nums.size()-1){
                    max_index = nums.size()-1;
                    break;
                }
                if(nums[i]-t > max_ele){
                    max_ele = nums[i]-t;
                    max_index = i;
                }
                t--;
            }
            index = max_index;
            jumps++;
        }
        return jumps;
    }
};



// [2, 1 , 3, 6, 2, 1, 1, 3, 1, 0, 2, 4, 1, 2, 1]

//  2  0  3.

//         3 4. 1 1
//            6 -3 -3 -2 1. 0 0
//                       3 -1 -1 2.
//                                2 3. 1
//                                   4 1 2 1
