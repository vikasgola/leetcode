class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        // set<string> substrings;
        // for(int i=0;i<word.length();i++){
        //     for(int j=1;j<=(word.length()-i);j++){
        //         substrings.insert(word.substr(i, j));
        //     }
        // }
        int ans = 0;
        for(auto &s: patterns){
            if(s.length() > word.length()) continue;
            if(word.find(s) != -1) ans++;
        }
        return ans;
    }
};