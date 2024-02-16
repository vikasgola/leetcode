class Solution {
public:
    map<char, string> numpad = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
    };

    void generate(string digits, vector<string> &ans){
        if(digits.size() == 0) return;
        vector<string> temp;
        for(int i=0;i<ans.size();i++){
            for(auto c: numpad[digits[0]]){
                temp.push_back(ans[i]+c);
            }
        }
        ans = temp;
        generate(digits.substr(1), ans);
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size() ==0) return {};
        vector<string> ans;
        ans.push_back("");
        generate(digits, ans);
        return ans;
    }
};