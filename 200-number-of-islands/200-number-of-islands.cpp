class Solution {
public:
    
    void DFS(vector<vector<char>> &grid, int i, int j){
        
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) //boundary checking   
            return;
        
        if(grid[i][j]=='2' || grid[i][j]=='0')//return if current position is water or visited when used in recursion in the below code it might land in water again while checking
            return;

        grid[i][j]='2';//mark the current as visited 
        //do dfs in all 4 directions 
        DFS(grid, i+1, j);
        DFS(grid, i, j+1);
        DFS(grid, i, j-1);
        DFS(grid, i-1, j);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if (grid.size()==NULL)
            return 0;
//each island is a connected component
        int ans =0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    DFS(grid, i, j);
                    ++ans;
                }
            }
        }
        return ans;
    }
};