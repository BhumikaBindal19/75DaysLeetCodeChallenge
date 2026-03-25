class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 , maxp = 0 , price =prices[0];
        // for(int i = 0 ; i < prices.size() ; i++){
        //     for(int j = i+1 ; j < prices.size();j++){
        //         profit= prices[j]-prices[i];
        //         maxp = max(maxp , profit);
        //     }
        // }
        for(int i= 1; i<prices.size();i++){
            profit= prices[i]-price;
            maxp = max(profit , maxp);
            price= min(prices[i],price);
        }
        return maxp;

    }
};