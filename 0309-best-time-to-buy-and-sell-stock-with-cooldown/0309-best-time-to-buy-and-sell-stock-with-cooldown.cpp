class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int sell = 0, prev_sell = 0, buy = INT_MIN, prev_buy;
        for (int price : prices) {
            prev_buy = buy;
            buy = max(prev_sell - price, prev_buy);
            prev_sell = sell;
            sell = max(prev_buy + price, prev_sell);
        }
     return sell;
    }
};