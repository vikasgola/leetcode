class Solution {
public:
    bool comp(string a, string b){
        if(a == b) return false;
        if(a.length() == b.length()){
            int i = -1;
            while(++i < a.length()){
                if(a[i] < b[i]) return false;
                else if(a[i] > b[i]) return true;
            }
            return true;
        }
        return a.length() > b.length();
    }
    int minimumPartition(string s, int k) {
        string num = "", old_num = "";
        int part = 0;
        string ks = to_string(k);
        for(int i=0;i<s.length();i++){
            old_num = num;
            num += s[i];
            if(comp(num, ks)){
                part++; num = s[i];
                if(comp(num, ks)) return -1;
            }
        }
        if(comp(ks, num) || ks == num) part++;
        return part;
    }
};