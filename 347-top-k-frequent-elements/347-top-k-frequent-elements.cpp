class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        for(auto it: nums){
            mp[it]++;
        }
        vector<vector<int>> buckets(nums.size()+1);
        for(auto [a,b]: mp)
            buckets[b].push_back(a);
        
        vector<int> res;
        for(int i=nums.size();k;i--){
            for(auto a: buckets[i]){
                res.push_back(a);
                k--;
            }
        }
        return res;
    }
};