class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            map<char, bool> row, col;
            for(int j=0;j<board.size();j++){
                if(board[i][j] != '.'){
                    if(row.find(board[i][j]) != row.end()) return false;
                    row[board[i][j]] = true;
                }

                if(board[j][i] != '.'){
                    if(col.find(board[j][i]) != col.end()) return false;
                    col[board[j][i]] = true;
                }
                if(i%3 == 0 && j%3 == 0){
                    map<char, bool> box;
                    for(int p=0;p<3;p++){
                        for(int q=0;q<3;q++){
                            if(board[i+p][j+q] == '.') continue;
                            if(box.find(board[i+p][j+q]) != box.end()) return false;
                            box[board[i+p][j+q]] = true;
                        }
                    }
                }
            }
        }

        return true;
    }
};