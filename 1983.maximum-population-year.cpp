class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int ages[101] = {0};
        for(int i=0;i<logs.size();i++){
            ages[logs[i][0] - 1950] += 1;
            ages[logs[i][1] - 1950] -= 1;
        }

        int maxage = ages[0], maxi = 0, cage = ages[0];
        for(int i=1;i<101;i++){
            cage = ages[i]+cage;
            if(maxage < cage){
                maxage = max(maxage, cage);
                maxi = i;
            }
        }
        return 1950 + maxi;
    }
};