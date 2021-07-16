/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    struct cmpByStringLength {
        bool operator()(const std::string& a, const std::string& b) const {
            return b < a;
        }
    };
    int romanToInt(string s) {
        int ans = 0;
        const map<string, int, cmpByStringLength> possible_codes = {{"IV", 4}, {"IX",9}, {"XL",40}, {"XC",90}, {"CD",400}, {"CM",900}, {"M",1000}, {"D",500}, {"C",100}, {"L",50}, {"X",10}, {"V",5}, {"I",1}};
        for(int i =0; i < s.length();i++){
            if(possible_codes.count(s.substr(i,2))){
                ans += possible_codes.at(s.substr(i,2));
                i++;
            }else{
                ans += possible_codes.at(s.substr(i,1));
            }
        }
        return ans;
    }
};
// @lc code=end

