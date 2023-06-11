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
        // Avoiding duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        
        int target = -nums[i]; // Target sum for the two-pointer technique
        int left = i + 1; // Left pointer
        int right = n - 1; // Right pointer
        
        while (left < right) {
            int sum = nums[left] + nums[right];
            
            if (sum == target) {
                res.push_back({nums[i], nums[left], nums[right]});
                
                // Avoiding duplicates for the second and third elements
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;
                
                // Moving the pointers
                left++;
                right--;
            } else if (sum < target) {
                left++; // Increment left pointer if sum is less than target
            } else {
                right--; // Decrement right pointer if sum is greater than target
            }
        }
    }
        return res;
    }
};