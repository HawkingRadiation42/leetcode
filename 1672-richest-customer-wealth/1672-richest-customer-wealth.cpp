class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int person=0;
        int add=0;
        for(int i=0;i<accounts.size();i++){
            add = 0;
            for(int j=0;j<accounts[0].size();j++){
                add += accounts[i][j];
            }
            person = max(add, person);
        }
        return person;
    }
};