class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_sum = nums[0]; 
        int min_sum = nums[0]; 
        int sum = nums[0]; 
        int prev_min = nums[0]; 
        int prev_max = nums[0];
        
        for (int i = 1;i<nums.size();i++){
            sum += nums[i];
            
            prev_max = max(prev_max + nums[i], nums[i]);
            max_sum = max(max_sum, prev_max);
            
            prev_min = min(prev_min + nums[i], nums[i]);
            min_sum = min(min_sum, prev_min);
        }
        
        return sum == min_sum ? max_sum : max(max_sum, sum-min_sum);
    }
};