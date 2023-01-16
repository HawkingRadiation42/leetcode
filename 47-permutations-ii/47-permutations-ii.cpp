class Solution {
public:
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(begin(nums), end(nums));
        
        ans.emplace_back(nums);
        while (next_permutation(begin(nums), end(nums))) {
            ans.emplace_back(nums);
        }
        return ans;
    }
};