class Solution {
public:
    void dfs(vector<vector<int>> graph, vector<bool>& visited, int city){
        visited[city] = true;
        for (int near = 0; near < graph.size(); ++near) {
            if (graph[city][near] == 1 && !visited[near]) {
                dfs(graph, visited, near);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int res = 0;
        if(isConnected.size()==0)
            return 0;
        vector<bool> visited(isConnected.size(), false);
        for(int i=0;i<isConnected.size();i++){
            if(!visited[i]){
                dfs(isConnected, visited, i);
                res++;
            }
        }
        return res;
    }
};

// 1 1 0
// 1 1 0
// 0 0 1
    
// 1 0 0
// 0 1 0
// 0 0 1
    