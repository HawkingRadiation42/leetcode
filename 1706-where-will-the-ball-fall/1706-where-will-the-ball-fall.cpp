class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> res;
        for(int i=0;i<grid[0].size();i++){
            int cpos = i;
            int npos;
            
            for(int j=0;j<grid.size();j++){
                
                npos = cpos+grid[j][cpos];
                
                if(npos<0||npos>=grid[0].size()||grid[j][npos]!=grid[j][cpos]){
                    cpos=-1;
                    break;
                }
                cpos=npos;
            }
            res.push_back(cpos);
        }
        return res;
    }
    
};