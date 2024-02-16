class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        for(auto &c: t) freq[c]++;

        int left = 0, right=0;
        int total = 0;
        unordered_map<char, int> curr;
        char p;
        int c;
        pair<int, int> ans = {-1, s.length()};
        while(left <= right){
            if(total == t.length()){
                // cout<<left<<" "<<right<<endl;
                if(ans.second-ans.first > right-left){
                    ans = {left, right};
                }
                p = s[left]; c = freq[p];
                if(c > 0){
                    curr[p]--;
                    if(curr[p] < freq[p]) total--;
                }
                left++;
            }else if(right < s.length()){
                p = s[right]; c = freq[p];
                if(c > 0){
                    curr[p]++;
                    if(curr[p] <= freq[p]) total++;
                }
                right++;
            }else break;
        }
        if(ans.first == -1) return "";
        return s.substr(ans.first, ans.second-ans.first);
    }
};