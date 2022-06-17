// using greedy
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int netProfit = 0;
        for(int i = 0 ; i < prices.size() ;i++){
            if(prices[i] > prices[i-1]){
                netProfit += (prices[i] - prices[i-1])
            }
        }
        return netProfit;
    }
};