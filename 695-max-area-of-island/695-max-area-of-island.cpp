class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    result = max(result, areaofisland(grid, i, j));
                }
            }
        }
        return result;
    }
    int areaofisland(vector<vector<int>> &grid, int i, int j){
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==1){
            grid[i][j]=0;
            return 1+areaofisland(grid, i+1, j)+areaofisland(grid, i-1, j)+areaofisland(grid, i, j-1)+areaofisland(grid, i, j+1);
        }
        return 0;
    }
};