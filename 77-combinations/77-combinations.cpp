class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;
    
    vector<vector<int>> combine(int n, int k) {
        helper(1, k, n);
        return ans;
    }
    
    void helper(int idx, int k, int n){
        if(current.size()==k){
            ans.push_back(current);
            return;
        }
        for(int i=idx;i<n+1;i++){
            current.push_back(i);  
            helper(i+1,k,n);
            current.pop_back(); 
        }
    }
};