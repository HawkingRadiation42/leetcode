class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map<int, int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            
            if(nums[abs(nums[i])-1]<0)
                v.push_back(abs(nums[i]));
            else
                nums[abs(nums[i])-1] *= -1;
        }
        return v;
    }
};