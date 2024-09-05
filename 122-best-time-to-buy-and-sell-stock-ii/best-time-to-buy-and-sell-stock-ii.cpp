class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;

        // Loop through the price array
        for (int i = 1; i < prices.size(); i++) {
            // If the current price is greater than the previous day's price, add the profit
            if (prices[i] > prices[i - 1]) {
                totalProfit += prices[i] - prices[i - 1];
            }
        }

        return totalProfit; // Return the total accumulated profit
    }
};
