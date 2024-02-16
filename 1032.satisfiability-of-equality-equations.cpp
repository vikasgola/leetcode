class Solution {
public:

    int getparent(int loc[], int a){
        int t = loc[a];
        while(t != loc[t]) t = loc[t];
        return t;
    }


    bool check(int loc[], int a, int b){
        int t = getparent(loc, a);
        int t2 = getparent(loc, b);
        return t != t2;
    }

    void add(int loc[], int a, int b){
        loc[b] = loc[a];
    }

    bool equationsPossible(vector<string>& equations) {
        int n = equations.size();
        //if(n < 1) return true;
        int loc[26];
        for(int i=0;i<26;i++) loc[i] = i;

        for(int i=0;i<n;i++){
            int a = getparent(loc, equations[i][0] - 'a');
            int b = getparent(loc, equations[i][3] - 'a');
            if(equations[i][1] == '='){
                a < b ? add(loc, a, b) : add(loc, b, a);
            }
	    }

        for(int i=0;i<n;i++){
            int a = equations[i][0] - 'a';
            int b = equations[i][3] - 'a';
            if(equations[i][1] == '!' && !check(loc, a, b)){
                return false;
            }
        }
        return true;
    }
};