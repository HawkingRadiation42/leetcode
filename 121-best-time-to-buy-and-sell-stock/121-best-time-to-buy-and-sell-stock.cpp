class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = INT_MAX;
        int profit = 0, maxprofit = 0;
        
        for(int i=0;i<prices.size();i++){
            if(least>prices[i]){
                least = prices[i];
            }
            profit = prices[i]-least;
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    }
};