class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &it:grid){
            sort(it.begin(), it.end());
        }
        
        int res=0;
        int j=0;
        while(j<grid[0].size()){
            int maximum=0;
            for(int i=0; i<grid.size(); i++){
                maximum = max(maximum, grid[i][j]);  
            }
            j++;
            res += maximum; 
        }
        return res;
    }

};