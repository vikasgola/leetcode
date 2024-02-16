class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<string> s;
        for(int i=0;i<tokens.size();i++){
            s.push_back(tokens[i]);
            if(tokens[i] == "/" || tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "-"){
                s.pop_back();
                int a = stoi(s.back()); s.pop_back();
                int b = stoi(s.back()); s.pop_back();
                int ans = 0;
                if(tokens[i] == "+") ans = a+b;
                if(tokens[i] == "*") ans = a*b;
                if(tokens[i] == "-") ans = b-a;
                if(tokens[i] == "/") ans = b/a;
                s.push_back(to_string(ans));
            }
        }
        return stoi(s.front());
    }
};