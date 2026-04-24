class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
   
    int largest = 0;
    int buy = INT_MAX;
    for(int i = 1 ; i < prices.size() ; i++){
        buy = min(buy , prices[i-1]);
        int diff = prices[i] - buy;
        largest = max(diff , largest);
    }

 return largest;     
    }
};
