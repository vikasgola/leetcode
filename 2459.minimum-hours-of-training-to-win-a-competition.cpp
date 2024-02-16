class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int training = 0;
        int sum = 0;
        sum = accumulate(energy.begin(), energy.end(), sum);
        if( sum >= initialEnergy ) training += sum + 1 - initialEnergy;
        int cexp = initialExperience;
        for(int i=0;i<experience.size();i++){
            if(cexp > experience[i]){
                cexp += experience[i];
            }else{
                training += experience[i] - cexp + 1;
                cexp += experience[i] - cexp + 1;
                cexp += experience[i];
            }
        }
        return training;
    }
};