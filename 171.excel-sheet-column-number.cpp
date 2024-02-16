class Solution {
public:
    int titleToNumber(string columnTitle) {
        // reverse(columnTitle.begin(), columnTitle.end());
        int ans = 0;
        for(auto &c: columnTitle){
            ans = ans*26 + (c-'A'+1);
        }
        return ans;
    }
};