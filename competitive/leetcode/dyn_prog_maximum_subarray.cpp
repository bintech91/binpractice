#include <stdint.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> max_subs;
        max_subs.reserve(nums.size());

        for(int i = 0; i < nums.size(); i++)  {
            if(i == 0 ){
                max_subs.push_back(nums[i]);
                continue;
            }

            int max_sub = max(max_subs[i-1] + nums[i], nums[i]);
            max_subs.push_back(max_sub);
        }

        int max = INT_MIN;
        for(int max_sub : max_subs) {
            if(max_sub > max) {
                max = max_sub;
            }
        }
        return max;
    }
};