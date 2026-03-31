class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> r(9),c(9),b(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;
                int cur = board[i][j] - '0';
                
                int idx = (i/3)*3+(j/3);
                if(r[i].count(cur) || c[j].count(cur) || 
                b[idx].count(cur)) return false;
                r[i].insert(cur);
                c[j].insert(cur);
                b[idx].insert(cur);
            }
        }
        return true;
    }
};
