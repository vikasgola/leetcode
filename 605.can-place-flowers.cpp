class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1 and flowerbed[0] == 0) return 1 >= n;
        int count = 0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0){
                if((i == 0 && flowerbed[i+1] == 0) || (i == flowerbed.size()-1 && flowerbed[i-1] == 0)){
                    count++; flowerbed[i] = 1;
                }
                if(i > 0 && i < flowerbed.size()-1 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                    count++; flowerbed[i] = 1;
                }
            }
        }
        return count >= n;
    }
};