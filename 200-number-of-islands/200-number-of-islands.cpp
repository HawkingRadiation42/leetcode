class Solution {
public:

    void dfs(int r, int c, vector<vector<char>>& grid, int rows, int columns){
        if(r >= 0 && r < rows && c >= 0 && c < columns && grid[r][c] == '1'){
            grid[r][c]= '0';
            dfs(r-1, c, grid, rows, columns);
            dfs(r+1, c, grid, rows, columns);
            dfs(r, c-1, grid, rows, columns);
            dfs(r, c+1, grid, rows, columns);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
//         if(grid.size()==0)
//             return 0;
        
        int rows = grid.size();
        int column = grid[0].size();
        int count = 0;
        for(int i=0;i<rows;i++){
            for( int j=0;j<column;j++){
                if(grid[i][j]== '1'){
                    count++;
                    dfs(i, j, grid, rows, column);
                }
            }
        }
        return count;
    }
};