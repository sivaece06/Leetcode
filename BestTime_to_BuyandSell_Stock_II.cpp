class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        unsigned int  running_profit = 0, max_profit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            running_profit = max(0, prices[i] - prices[i-1]);
            max_profit = max(max_profit, max_profit + running_profit);
        }
    
        return max_profit;
        
    }
};
