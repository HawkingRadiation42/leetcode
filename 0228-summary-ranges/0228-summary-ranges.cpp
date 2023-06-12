class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;

        int n = nums.size();
        if (n == 0) {
            return res; 
        }
        int start = nums[0];

        for (int i = 0; i < n; i++) {
            
            if (i == n - 1 || nums[i] + 1 != nums[i + 1]) {
                if (start == nums[i]) {
                    res.push_back(to_string(start)); 
                } else {
                    res.push_back(to_string(start) + "->" + to_string(nums[i])); 
                }
                if (i != n - 1) {
                    start = nums[i + 1]; 
                }
            }
        }

        return res;
    }
};