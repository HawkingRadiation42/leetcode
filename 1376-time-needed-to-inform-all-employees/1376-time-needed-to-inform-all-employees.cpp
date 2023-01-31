class Solution {
public:
    unordered_map<int, vector<int>> map;
    int ans =0;
    int mx =0;
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {

        for(int i=0;i<n;i++){    
            if(manager[i]!=-1){
                map[manager[i]].push_back(i);
            }
        }
        dfs(headID, informTime);
        return mx;
    }
    
    void dfs(int manager, vector<int>& informTime){
        mx = max(mx,ans);
        
        for(auto employee: map[manager]){
            ans += informTime[manager];
            
            dfs(employee, informTime);
            ans -= informTime[manager];
        }
    }
};