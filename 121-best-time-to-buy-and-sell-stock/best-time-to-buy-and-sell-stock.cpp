class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxprofit = 0;
        int n = prices.size();

    
        for (int i= 0; i<n; i++){
            int cost = prices[i]- mini; //profit if we sold at the same day
            maxprofit =max(maxprofit , cost);  //update best profit
            mini = min(mini,prices[i]);  // update lowest price
        }
        return maxprofit;
    }
};