class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miniprice = prices[0];
        int maxprofit = 0;
        int n = prices.size();

        for(int i = 0; i < n; i++){
            int cost = prices[i] - miniprice;
            maxprofit = max(maxprofit , cost);
            miniprice = min(prices[i], miniprice);
        }
        return maxprofit;
    }
};