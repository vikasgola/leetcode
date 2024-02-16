class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int minteach = INT_MAX;
        int m = languages.size();
        vector<vector<bool>> known(m, vector<bool>(n, false));
        vector<vector<bool>> common(m, vector<bool>(m, false));
        vector<vector<bool>> processed(m, vector<bool>(m, false));


        for(int i=0;i<m;i++){
            for(int j=0;j<languages[i].size();j++){
                known[i][languages[i][j]-1] = true;
            }
        }

        for(int i=1;i<=n;i++){
            int teach = 0;
            vector<bool> wetaught(m, false);
            for(int j=0;j<friendships.size();j++){
                int u1 = friendships[j][0];
                int u2 = friendships[j][1];

                if(!processed[u1-1][u2-1]){
                    auto a = languages[u1-1];
                    for(int l=0;l<a.size();l++){
                        if(known[u2-1][a[l]-1]){
                            common[u1-1][u2-1] = common[u2-1][u1-1] = true;
                            break;
                        }
                    }
                    processed[u1-1][u2-1] = true;
                }

                if(common[u1-1][u2-1]) continue;

                if(!known[u1-1][i-1] && !wetaught[u1-1]){
                    teach++; wetaught[u1-1] = true;
                }

                if(!known[u2-1][i-1] && !wetaught[u2-1]){
                    teach++; wetaught[u2-1] = true;
                }
            }
            minteach = min(teach, minteach);
        }
        return minteach;
    }
};