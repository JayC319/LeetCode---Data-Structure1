class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = INT_MAX;
        int maximumProfit = 0;
        
        for(int count = 0; count < prices.size(); count++) {
            if(prices[count] < buyPrice)
                buyPrice = prices[count];
            if(maximumProfit < prices[count] - buyPrice)
                maximumProfit = (prices[count] - buyPrice);
        }
        
        return maximumProfit;
    }
};