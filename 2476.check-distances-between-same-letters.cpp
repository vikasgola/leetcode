class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> cdist(26, -1);
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(cdist[c - 'a'] != -1) cdist[c-'a'] = i - cdist[c - 'a'] -1;
            else cdist[c-'a'] = i;
        }

        for(int i=0;i<26;i++){
            if(cdist[i] != -1 && cdist[i] != distance[i]){
                return false;
            }
        }
        return true;
    }
};