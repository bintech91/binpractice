class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> maxs;
        maxs.reserve(nums.size());

        int max_current = 0;
        int max_previous = 0;

        for(int num:nums){
            if(maxs.size() == 0) {
                maxs.push_back(num);
                max_current = num;
                continue;
            }

            int max = std::max(max_current, max_previous + num);
            max_previous = max_current;
            max_current = max;
        }

        return max_current;
    }
};
