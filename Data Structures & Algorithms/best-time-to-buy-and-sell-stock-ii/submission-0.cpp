class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxProfit = 0;

  for(int i = 1 ; i < prices.size() ; i++){
    int best_buy = prices[i];
    int diff = prices[i] - prices[i-1];
    if(diff <= 0) continue;
    else maxProfit += diff;
  }

  return maxProfit;
    }
};