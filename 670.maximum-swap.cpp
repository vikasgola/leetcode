class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        vector<pair<int, int>> maxs(s.length());
        pair<int, int> maxall = {0, s.length()-1};
        for(int i=s.length()-1;i>=0;i--){
            if(maxall.first < s[i]-'0'){
                maxall = {s[i]-'0', i};
            }
            maxs[i].first = maxall.first;
            maxs[i].second = maxall.second;
        }
        for(int i=0;i<s.length();i++){
            if(s[i] != '9' && maxs[i].first > s[i]-'0'){
                swap(s[i], s[maxs[i].second]);
                return stoi(s);
            }
        }
        return num;
    }
};