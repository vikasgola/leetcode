class Solution {
public:
    bool makeEqual(vector<string>& words) {
		map<char, int> chars;
		for(auto &s: words){
			for(auto &c: s){
				chars[c]++;
			}
		}
		for(auto &p: chars){
			if(p.second%words.size() != 0){
				return false;
			}
		}
		return true;
    }
};
