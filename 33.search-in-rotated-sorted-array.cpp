class Solution {
public:
    int binarysearch(vector<int>& nums, int target, int l, int r){
        if(l > r) return -1;
        int mid = l + (r-l)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) return binarysearch(nums, target, mid+1, r);
        else return binarysearch(nums, target, l, mid-1);
    }

    int rotatedbinarysearch(vector<int>&nums, int target, int l, int r){
        if(l > r) return -1;
        int mid = l + (r-l)/2;
        if(nums[mid] == target) return mid;

        if(nums[l] <= nums[mid]){
            if(nums[l] <= target && target <= nums[mid])
                return rotatedbinarysearch(nums, target, l, mid);
            else
                return rotatedbinarysearch(nums, target, mid+1, r);
        }else if(nums[mid] < nums[r]){
            if(nums[r] >= target && target >= nums[mid])
                return rotatedbinarysearch(nums, target, mid, r);
            else
                return rotatedbinarysearch(nums, target, l, mid-1);
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        return rotatedbinarysearch(nums, target, 0, nums.size()-1);
    }
};


// [4,5,6,7, 8, 9, 0,1,2]
// [8,9,0,1,2,3,4,5,6,7]

// 9, 0, 1
// 8, 9, 0

// mid-1 mid mid+1
// start < mid && mid-1 < mid < mid+1 ==== left sorted including mid
// start > mid && mid-1 < mid < mid+1 ==== right sorted including mid
// mid-1 < mid < mid+1
        // mid-1 > mid   left sorted excluding mid and right sorted including mid
        // mid >  mid+1   right sorted excluding mid and left sorted including mid



