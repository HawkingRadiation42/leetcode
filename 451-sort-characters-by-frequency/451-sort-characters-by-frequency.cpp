class Solution {
public:
    string frequencySort(string s) {
        string res = "";
        unordered_map<char, int> mp;
        for(auto it: s){
            mp[it]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto [a,b]: mp){
            pq.push({b,a});
        }
        while(!pq.empty()){
            res+= string(pq.top().first, pq.top().second);
            pq.pop();    
        }
        return res;
    }
};