class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        vector<vector<int>> ans;
        //used the concept of maps
        map<int, vector<int>, greater<int>> mp; // ordered map and the third argument greater<int> is for descending order
        for(int i=0;i<s.size();i++){
            mp[s[i][k]]=s[i];
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};