class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
    vector <int> buy(prices.size());
    int largest = 0;
    buy[0] = INT_MAX;
    for(int i = 1 ; i < prices.size() ; i++){
        buy[i] = min(buy[i-1] , prices[i-1]);
        int diff = prices[i] - buy[i];
        largest = max(diff , largest);
    }

 return largest;     
    }
};
