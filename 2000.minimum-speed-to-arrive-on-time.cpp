// [1,1,100000]\n2.01
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if(hour-dist.size()+1 < 0) return -1;
        int minspeed = 1;
        auto isSatisfy = [](vector<int>& dist, double hour, int speed){
            double time =0;
            for(int i=0;i<dist.size()-1;i++)
                time += (dist[i]+speed-1)/speed;

            time += (double)dist.back()/speed;
            return time <= hour;
        };
        int maxspeed = 1e7;
        int mid;
        int ans = -1;
        while(minspeed<=maxspeed){
            mid = minspeed+(maxspeed-minspeed)/2;
            if(isSatisfy(dist, hour, mid)){
                maxspeed = mid-1;
                ans = mid;
            }else{
                minspeed = mid+1;
            }
        }
        return ans;
    }
};