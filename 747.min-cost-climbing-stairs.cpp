class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int f1 = cost[0], f2 = cost[1];
        for(int i=2;i<cost.size();i++){
            int temp = cost[i] + min(f1, f2);
            f1 = f2;
            f2 = temp;
        }

        return min(f1, f2);
    }
};