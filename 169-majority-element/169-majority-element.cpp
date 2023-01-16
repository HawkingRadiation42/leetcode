class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int> map;
        // for(auto i: nums){
        //     map[i]++;
        // }
        // int maxval = nums[0];
        // for(auto it:map){
        //     if(it.second>map[maxval]){
        //         maxval = it.first;
        //     }
        // }
        // return maxval;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n/2];
    }
    
};