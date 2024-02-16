class Solution {
public:
    void generate(vector<string> &ans, string curr, int left, int right){
        if(left > right) return;
        if(left == right && left == 0){
            ans.push_back(curr);
            return;
        }
        if(left)
        generate(ans, curr+"(", left-1, right);
        if(right)
        generate(ans, curr+")", left, right-1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans, "", n, n);
        return ans;
    }
};