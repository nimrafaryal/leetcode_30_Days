class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min_p=INT_MAX;
int max_profit=0;
for(int i=0;i<prices.size();i++){
	if(prices[i]< min_p){
		min_p = prices[i];
	}
	else if(prices[i] - min_p >max_profit){
		max_profit = prices[i] - min_p ;
	}
}
return max_profit; 
    }
};