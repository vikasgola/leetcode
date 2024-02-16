class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> anagrams_map;
        for(auto a:strs){
            vector<int> d(26, 0);
            for(int i=0;i<a.size();i++){
                d[a[i]-'a']++;
            }
            anagrams_map[d].push_back(a);
        }
        vector<vector<string>> anagrams;
        for(auto a: anagrams_map){
            anagrams.push_back(a.second);
        }

        return anagrams;
    }
};