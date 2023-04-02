class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        int n(potions.size());
        sort(potions.begin(), potions.end());
        
        for(int i=0;i<spells.size();i++){
            int start(0), end(n);
            while(start<end){
                int mid = start + (end-start)/2;
                if((long long)spells[i]* potions[mid] >= success){
                    end = mid;
                }
                else{
                    start = mid+1;
                }
            }
            res.push_back(n-start);
        }
        return res;
        
    }
};