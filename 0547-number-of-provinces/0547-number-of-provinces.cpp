class Solution {
public:
    void dfs(vector<vector<int>> graph, vector<bool>& visited, int city){
        visited[city] = true;
        for (int neighbor = 0; neighbor < graph.size(); ++neighbor) {
            if (graph[city][neighbor] == 1 && !visited[neighbor]) {
                dfs(graph, visited, neighbor);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int res = 0;
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
    