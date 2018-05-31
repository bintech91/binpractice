class Solution {
public:
    std::vector<int> solutions = {1,1,2,3};

    int climbStairs(int n) {
        if(solutions.size() > n) {
            return solutions[n];
        }
        int num_climb = climbStairs(n - 1) + climbStairs(n - 2);
        solutions.push_back(num_climb);
        return num_climb;
    }
};
