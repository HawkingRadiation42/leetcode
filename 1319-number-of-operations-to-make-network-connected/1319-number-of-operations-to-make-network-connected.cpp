class Solution {
public:
    void dfs(vector<vector<int>>& graph , vector<bool>& visited , int start){
        visited[start]=true;
        for(auto it : graph[start]){
            if(!visited[it]){
                dfs(graph , visited , it );
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n>connections.size()+1)
            return -1;
        
        vector<vector<int>> graph(n);
        for(auto con : connections){
            graph[con[0]].push_back(con[1]);
            graph[con[1]].push_back(con[0]);
        }
        
        vector<bool> visited(n ,false);
        int component=0;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                component++;
                dfs(graph , visited , i);
            }
        }
        return component-1;
    }
};