class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        combination(candidates, target, curr,0,0, res);
        return res;
    }
    void combination(vector<int>& candidates, int target, vector<int>& curr, int sum, int index, vector<vector<int>>& res){
        if(sum>target)
            return ; //backtrack 
        if(sum==target){
            res.push_back(curr);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            curr.push_back(candidates[i]);
            sum+=candidates[i];
            combination(candidates, target, curr,sum, i, res);
            curr.pop_back();
            sum-=candidates[i];
        }
    }
};