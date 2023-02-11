class Solution {
public:
    
    void dfs(int r, int c, vector<vector<char>>& board){
        int rows = board.size();
        int col = board[0].size();
        
        
        if (r < 0 || r >= rows || c < 0 || c >= col || board[r][c] != 'O') {
            return;
        }
        board[r][c]= 'A';
        dfs(r-1, c, board);
        dfs(r+1, c, board);
        dfs(r, c-1, board);
        dfs(r, c+1, board);
    }
    
    void solve(vector<vector<char>>& board) {
        
        if (board.size() == 0) {
            return;
        }
        int rows = board.size();
        int col = board[0].size();
        for(int i =0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(i==0 || i==rows-1 || j==0 || j==col-1){
                    if(board[i][j]== 'O'){
                        dfs(i, j, board);
                    }
                }
            }
        }
        for(int i =0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='A'){
                    board[i][j]='O';
                }
            }
        }
    }
};