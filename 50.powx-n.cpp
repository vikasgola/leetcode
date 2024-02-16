class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1 || x == 0) return x;
        if(n == 1) return x;
        if(n == -1) return 1/x;
        if(n == 0) return 1;
        if(x == -1) return x*(n%2 == 0 ? -1: 1);
        if(n%2 == 0){ double t = myPow(x, n/2); return t*t; }
        else return myPow(x, (n > 0) ? 1 : -1)*myPow(x, n + ((n > 0) ? -1 : 1));
    }
};