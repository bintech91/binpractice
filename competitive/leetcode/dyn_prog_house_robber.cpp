#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        vector<int> maxs;
        maxs.reserve(10000000);
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                maxs.push_back(nums[i]);
            } else if (i == 1) {
                maxs.push_back(max(nums[0], nums[1]));
            } else {
                maxs.push_back(max(maxs[i - 2] + nums[i], maxs[i - 1]));
            }
        }

        return maxs[nums.size() - 1];
    }
};


int main() {
    Solution solution;

    vector<int> houses = {1};

    int robbed_money = solution.rob(houses);
    cout << robbed_money << endl;
}