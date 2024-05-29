//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0, mini = prices[0];

        for(int i=0;i<prices.size();i++){
            int cost= prices[i]-mini;
            maxprofit=max(maxprofit, cost);
            mini=min(mini,prices[i]);
        }
        return maxprofit;       
        
    }
};