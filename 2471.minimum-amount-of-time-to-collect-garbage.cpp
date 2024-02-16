class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        long long lm = 0, lp = 0, lg = 0;

        for(int i=1;i<travel.size();i++){
            travel[i] += travel[i-1];
        }
        travel.insert(travel.begin(), 0);
        long long minutes = 0;
        for(int i=0;i<garbage.size();i++){
            for(auto &c: garbage[i]){
                if(c == 'M'){
                    minutes += travel[i] - travel[lm];
                    lm = i;
                    minutes++;
                }
                if(c == 'P'){
                    minutes += travel[i] - travel[lp];
                    lp = i;
                    minutes++;
                }
                if(c == 'G'){
                    minutes += travel[i] - travel[lg];
                    lg = i;
                    minutes++;
                }
            }
        }
        return minutes;
    }
};