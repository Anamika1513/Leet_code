class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int best_buy = prices[0];
        int max_profit = 0;

        for(int i=1 ; i<n ; i++){
            if(best_buy<prices[i]){
                max_profit = max(max_profit , prices[i]-best_buy);
            }

            best_buy = min(best_buy , prices[i]);
        }

        return max_profit;
    }
};