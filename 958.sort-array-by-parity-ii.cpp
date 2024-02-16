class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> temp, temp2,B;
        for(int i=0;i<A.size();i++){
            if(A[i]%2 == 0){
                temp.push_back(A[i]);
            }else{
                temp2.push_back(A[i]);
            }
        }


        for(int i=0;i<A.size()/2;i++){

                B.push_back(temp[i]);

                B.push_back(temp2[i]);

        }


        return B;
    }
};