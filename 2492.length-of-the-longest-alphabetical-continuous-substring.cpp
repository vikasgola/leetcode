class Solution {
public:
    int longestContinuousSubstring(string s) {
        int k = 1, longest = 1;
        for(int i=1;i<s.length();i++){
            if(s[i] - s[i-1] == 1){
                k++;
            }else{
                longest = max(k, longest);
                k = 1;
            }
        }
        return max(k, longest);
    }
};