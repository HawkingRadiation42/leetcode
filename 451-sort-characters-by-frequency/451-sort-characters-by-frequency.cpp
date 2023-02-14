class Solution {
public:
    string frequencySort(string s) {
        string res = "";
        unordered_map<char, int> mp;
        for(auto it: s){
            mp[it]++;
        }
        vector<vector<char>> buckets(s.size()+1);
        for(auto [a, freq]: mp){
            buckets[freq].push_back(a);
        }
        for(int i=s.size();i>0;i--){
            for(auto ch: buckets[i]){
                res+=string(i,ch);
            }
        }
        return res;
    }
};