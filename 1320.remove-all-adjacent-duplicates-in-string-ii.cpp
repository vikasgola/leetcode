class Solution {
public:
    string removeDuplicates(string s, int k) {
         vector<pair<char, int>> v;
        for (char& c : s) {
            if (v.empty() or v.back().first != c) {
                v.push_back({c, 1});
            }
            else {
                int& cnt = v.back().second;
                cnt = (cnt + 1) % k;
                if (cnt == 0) v.pop_back();
            }
        }

        string ret = "";
        for (auto& p : v) {
            for (int i = 0; i < p.second; ++i) ret.push_back(p.first);
        }
        return ret;
    }
};