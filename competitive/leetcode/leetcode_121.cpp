class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy = -1;
        int max_profit = -1;

        for(int price: prices) {
            if(max_profit == -1 && min_buy == -1) {
                min_buy = price;
                continue;
            }

            if((price - min_buy) > max_profit) {
                max_profit = price - min_buy;
            }

            if(price < min_buy) {
                min_buy = price;
            }
        }
        if(max_profit == -1) {
            return  0;
        }
        return max_profit;
    }
};
