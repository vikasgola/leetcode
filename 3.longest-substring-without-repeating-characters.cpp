class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        // for(int t=0;t<26;t++) m[t] = -1;
        int i=-1, j=-1, max = 0;
        for(int k=0;k<s.length();k++){
            if(m.find(s[k]) == m.end() || m[s[k]] == -1){
                j++;
                m[s[k]] = k;
            }else{
                for(int l=i+1;l<m[s[k]];l++) m[s[l]] = -1;
                i = m[s[k]];
                j++;
                m[s[k]] = k;
            }
            // cout<<"i:"<<i<<" j:"<<j<<endl;
            if(j-i > max) max = j-i;
        }
        return max;
    }
};