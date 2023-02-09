class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()<2){
            return nums[0];
        }
        int ans =0;
        for(auto x:nums){
            ans=ans^x;//xor 
        }
        return ans;
    }
};