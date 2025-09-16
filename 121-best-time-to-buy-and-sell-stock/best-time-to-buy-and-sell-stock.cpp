class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;   // track the lowest price so far
        int maxProfit = 0;        // track the maximum profit

        for (int price : prices) {
            minPrice = min(minPrice, price);               // update minimum price
            maxProfit = max(maxProfit, price - minPrice); // check profit if sold today
        }
        return maxProfit;
    }
};
