class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> max_subs;
        max_subs.reserve(nums.size());

        int max_current = numeric_limits<int>::min();
        int max_sub_array = numeric_limits<int>::min();

        for(int num : nums){
            if(max_current == numeric_limits<int>::min()) {
                max_current = num;
            } else {
                max_current = maxCurrent(num, num + max_current);
            }
            max_subs.push_back(max_current);
        }

        for(int max: max_subs) {
            if(max > max_sub_array) {
                max_sub_array = max;
            }
        }

        return max_sub_array;
    }

    int maxCurrent(int i1, int max_with_i1) {
        if(i1 > max_with_i1) {
            return i1;
        }

        return max_with_i1;
    }
};
