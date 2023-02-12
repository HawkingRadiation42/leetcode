class Solution {
public:
    
    void dfs(vector<vector<int>> &heights, int row, int col, int prev,vector<vector<int>> & ocean){
        if(row<0 || col<0 || row>heights.size()-1 || col>heights[0].size()-1){
            return;
        }else if(heights[row][col]<prev)
            return;
        
        else if(ocean[row][col] == 1)
            return;
        
        ocean[row][col] = 1;
        
        dfs(heights, row, col+1, heights[row][col], ocean);
        dfs(heights, row, col-1, heights[row][col], ocean);
        dfs(heights, row+1, col, heights[row][col], ocean);
        dfs(heights, row-1, col, heights[row][col], ocean);
    }
        
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> res;
    
        if (heights.empty() || heights[0].empty()) 
            return res;
        
        vector<vector<int>> pacific(heights.size(), vector<int>(heights[0].size(), 0));
        vector<vector<int>> atlantic(heights.size(), vector<int>(heights[0].size(), 0));
        
        for(int i=0;i<heights.size();i++){
            dfs(heights, i, 0, 0, pacific);
            dfs(heights, i, heights[0].size()-1, 0, atlantic);
        }
        
        for (int j = 0; j < heights[0].size(); j++) {
            dfs(heights, 0, j, 0, pacific);
            dfs(heights, heights.size() - 1, j, 0, atlantic);
        }
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                if(atlantic[i][j]==1 && pacific[i][j]==1){
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }
};