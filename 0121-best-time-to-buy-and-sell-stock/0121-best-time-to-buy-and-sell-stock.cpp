class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_prices = prices[n-1];
        int ans = 0;
        int diff = 0;
        for(int i=n-2; i>=0; i--){
            diff = max_prices - prices[i];
            ans = max(ans, diff);
            max_prices = max(max_prices, prices[i]);
        }
        return ans;
    }
};