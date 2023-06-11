class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3){// isnt it obvious?
            return {};
        }
        if(nums.size()==3){
            int res=0;
            for(int i=0;i<nums.size();i++){
                res += nums[i];
            }
            if(res==0){
                return {nums};
            }
            else
                return {};
        }
        sort(nums.begin(), nums.end());
        
        if(nums[0] > 0){// base case when the first element is positive in the sorted array 
            return {};
        }
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
        // to avoid duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        
        int target = -nums[i]; // target sum for two-pointer method
        int left = i + 1; // left p
        int right = n - 1; // right p
        
        while (left < right) {
            int sum = nums[left] + nums[right];
            
            if (sum == target) {
                res.push_back({nums[i], nums[left], nums[right]});
                
                // avoiding duplicates for the second and third elements
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;
                
                left++;
                right--;
            }
            else if (sum < target) {
                left++; 
            }
            else {
                right--;
            }
        }
    }
        return res;
    }
};