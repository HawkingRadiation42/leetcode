class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> res(gain.size() + 1); 
        res[0] = 0;
        for (int i = 1; i < res.size(); i++) {
            res[i] = res[i - 1] + gain[i - 1];
        }

        int maxi = 0;
        for (int i = 0; i < res.size(); i++) {
            maxi = max(maxi, res[i]);  
        }

        return maxi;
    }
};