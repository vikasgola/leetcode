class Solution {
public:
    bool isValid(string s) {
        vector<char> p;;
        for(auto &c: s){
            if(c == '(' || c == '{' || c == '[') p.push_back(c);
            else if(p.size() <= 0) return false;
            else{
                char o = p.back();
                if(o != '(' && c == ')') return false;
                else if(o != '[' && c == ']') return false;
                else if(o != '{' && c == '}') return false;
                p.pop_back();
            }
        }
        return p.size() ? false : true;
    }
};