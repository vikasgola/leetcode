class Solution {
public:
    int binarysearch(vector<int>& nums, int target, int l, int r){
        if(l > r) return -1;
        int mid = l + (r-l)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) return binarysearch(nums, target, mid+1, r);
        else return binarysearch(nums, target, l, mid-1);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int found = nums.size(), lastfound = -1;
        int start, end;
        while(found != -1){
            lastfound = found;
            found = binarysearch(nums, target, 0, found-1);
        }
        if(lastfound == nums.size()) return {-1, -1};
        start = lastfound;
        found = 0;
        while(found != -1){
            lastfound = found;
            found = binarysearch(nums, target, found+1, nums.size()-1);
        }
        end = lastfound;
        return {start, end};
    }
};