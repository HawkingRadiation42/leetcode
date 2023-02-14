class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        vector<int> res;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto [a,b]: mp)
            pq.push({b,a});
        
        while(k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};