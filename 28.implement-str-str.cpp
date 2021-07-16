/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        int needle_pp[needle.size()];
        needle_pp[0] = 0;
        for(int i=1;i<needle.size();i++){
            for(int j=0;j<needle.size(),i<needle.size();j++){
                if(needle[i] == needle[j]){
                    needle_pp[i++] = j+1;
                }else{
                    if(j==0){
                        needle_pp[i] =0;
                        break;
                    }else{
                        j = j > 0 ? needle_pp[j-1]: 0;
                    }
                    j--;
                    
                }
            }
        }
        int j=0;
        for(int i=0;i<haystack.length();i++){
            if(haystack[i] == needle[j]) j++;
            else if(j-1 >=0) j=needle_pp[j-1], i--;
            if(j==needle.size()) return i-j+1;
        }
        return -1;
    }
};
// @lc code=end

