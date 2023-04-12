class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int res=0;
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second ==1 ){
                res+=it.first;
            }
        }
        return res;
    }
};