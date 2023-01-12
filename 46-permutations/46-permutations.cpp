class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> permute(vector<int>& nums) {
        permutations(nums, 0, nums.size()-1);
        
        return ans;
    }
    void permutations(vector<int> &nums, int i, int n){
        if (i == n){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<=n;j++){
            swap(nums[i], nums[j]);
            permutations(nums, i+1, n);
            swap(nums[i], nums[j]);
        }
    }
};