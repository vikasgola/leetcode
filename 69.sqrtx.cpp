class Solution {
public:
    int mySqrt(int x) {
        long long xsqrt = x;
        while(xsqrt*xsqrt > x ){
            xsqrt = (xsqrt + x/xsqrt)/2;
        }
        return (int)xsqrt;
    }
};