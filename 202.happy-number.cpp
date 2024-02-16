class Solution {
public:
    bool isHappy(int n) {
        int sum=0, temp=n;
        vector<bool> isthere(1000, false);
        while(n != 1){
            sum = 0;
            while(n){
                sum += (n%10)*(n%10);
                n = n/10;
            }
            n = sum;
            if(isthere[n]){
                return false;
            }
            isthere[n] = true;
        }
        return true;
    }
};