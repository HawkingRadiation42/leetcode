class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph, 0);
        return ans;
    }
    
    void dfs(vector<vector<int>>& graph, int currnode){
        
        path.push_back(currnode);
        
        if(currnode == graph.size()-1)
            ans.push_back(path);
        
        else for(auto it: graph[currnode])
            dfs(graph, it);
            
        path.pop_back();
    }
};