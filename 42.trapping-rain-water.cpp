class Solution {
public:
    int _trap(vector<int>& height, bool isforward){
        int last_max= -1, curr_max = -1, last_i = -1, curr_i = -1;
        vector<int> sum(height.begin(), height.end());
        int ans = 0;
        for(int i=0;i<height.size();i++){
            if(i > 0) sum[i] += sum[i-1];
            if(height[i] > curr_max || (isforward && height[i] == curr_max)){
                last_max = curr_max;
                curr_max = height[i];
                last_i = curr_i;
                curr_i = i;

                if(last_i > -1)
                ans += (curr_i-last_i-1)*(last_max) - (sum[curr_i-1]-sum[last_i]);
            }
        }
        return ans;
    }
    int trap(vector<int>& height) {
        vector<int> rheight(height.rbegin(), height.rend());
        return _trap(height, true) +  _trap(rheight, false);
    }
};