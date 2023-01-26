class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int j=0;j<nums.size()-1;j++){
            if(mp[nums[j]]>1){
                for(int i=j+1;i<nums.size();i++){
                    if(i-j<=k){
                        if(nums[i]==nums[j]){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};