class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = INT_MAX;
        int max_profit = 0;

        for (int price : prices) {
            if (price < low) {
                low = price;
            }

            if ((price - low) > max_profit) {
                max_profit = price - low;
            }
        }

        return max_profit;
    }
};


int main() {
    Solution solution;

    vector<int> houses = {1};
    int maxProfit = solution.maxProfit(houses);
    cout << maxProfit << endl;
}