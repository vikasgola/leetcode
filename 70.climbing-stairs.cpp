class Solution {
public:
    int climbStairs(int n) {
        int steps = 1;
        int temp = 0;
        int t;
        for(int i=0;i<n;i++){
            t = steps;
            steps = steps+temp;
            temp = t;
        }
        return steps;
    }
};