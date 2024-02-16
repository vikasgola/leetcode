class Solution {
public:
    string removeStars(string s) {
        vector<char> cl;
        for(int i=0;i<s.length();i++){
            if(s[i] == '*'){
                cl.pop_back();
            }else{
                cl.push_back(s[i]);
            }
        }
        string ans(cl.begin(), cl.end());
        return ans;
    }
};