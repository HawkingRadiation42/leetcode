class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int least = INT_MAX;
        int profit =0;
        int overallProfit= 0;
        for(int i = 0;i<prices.size();i++){
            if(prices[i]<least){
                least = prices[i];
            }
            profit = prices[i]-least;
            if(profit>overallProfit){
                overallProfit = profit;
            }
        }
        return overallProfit;
    }
};