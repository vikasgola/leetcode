class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==1)
            return s;
	    string res;
        vector<vector<int> >dp(n,vector<int>(n,0));
        for(int i=0,j=0;i<n;i++,j++){
            dp[i][j]=1;
        }
        for(int i=0,j=1;j<n;i++,j++){
            if(s[i]==s[j]){
                dp[i][j]=1;
            }
        }
        for(int i=2;i<n;i++){
            for(int j=0,k=i;k<n;j++,k++){
                if(s[j]==s[k]){
                    if(dp[j+1][k-1]==1){
                        dp[j][k]=1;
                    }
                }
            }
        }
        bool flag=false;
        for(int i=n-1;i>=0;i--){
            for(int j=0,k=i;k<n;j++,k++){
                if(dp[j][k]==1){
                    flag=true;
                    res=string(s,j,k-j+1);
                    break;
                }
            }
            if(flag)
                break;
        }
        return res;
    }
};
