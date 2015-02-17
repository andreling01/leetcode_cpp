class Solution {
public:
    int maxProfit(vector<int> &prices) {
	  int profit = 0;
	  for(int i = 1; i < prices.size(); i++){
		if(prices.at(i) - prices.at(i - 1) > 0){
		  profit += prices.at(i) - prices.at(i - 1);
		}
	  }
	  return profit;
    }
};
