class Solution {
public:
    int _tribonacci(int n, int* dp){
        if(dp[n] != -1) return dp[n];
        dp[n-3] = _tribonacci(n-3, dp);
        dp[n-2] = _tribonacci(n-2, dp);
        dp[n-1] = _tribonacci(n-1, dp);
        return dp[n-1]+dp[n-2]+dp[n-3];
    }
    int tribonacci(int n) {
        int dp[38] = {-1};
        for(int i=0;i<38;i++) dp[i] = -1;
        dp[0] = 0; dp[1] = 1; dp[2] = 1;
        return _tribonacci(n, dp);
    }
};