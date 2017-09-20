class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp_n;
        dp_n.reserve(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                dp_n[i] = 1;
            } else if (i == 1) {
                dp_n[i] = 2;
            } else {
                dp_n[i] = dp_n[i - 1] + dp_n[i - 2];
            }
        }
        return dp_n[n - 1];
    }
};