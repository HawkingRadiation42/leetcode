class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> res;
        int maxelement = 0;
        for(int it: candies){
            maxelement = max(maxelement, it);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= maxelement){
                res.push_back(true);
            }
            else
                res.push_back(false);
        }
        return res;
        // find the maximum element value and using that iterate over
        // the vector to find if the extracandies when added will it be greater than the maxomum value if yes then add true to the new vector and if not then add false to the new vector 
    }
};