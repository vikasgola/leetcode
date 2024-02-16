class Solution {
public:
    string convert(string s, int numRows) {
        string ans = "";
        for(int i=0;i<numRows;i++){
            bool c = true;
            for(int j=i;j<s.length();j++){
                ans += s[j];
                if(i == 0 || i == numRows-1){
                    j += max(0, numRows-1 + numRows-2);
                }else{
                    if(c){
                        j += numRows-i + numRows-i-1 -2;
                    }else{
                        j += i + i-1;
                    }
                    c = !c;
                }
                // cout<<ans<<endl;
            }
        }
        return ans;
    }
};