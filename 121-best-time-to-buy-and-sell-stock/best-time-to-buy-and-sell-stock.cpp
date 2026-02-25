class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bestbuy = prices[0];
        int max_profit = 0;
        for(int i=1;i<n;i++){
            if(prices[i] > bestbuy){
                max_profit = max(max_profit,prices[i] - bestbuy);
            }
            else{
                bestbuy = min(prices[i],bestbuy);
            }
        }
        return max_profit;
    }
};