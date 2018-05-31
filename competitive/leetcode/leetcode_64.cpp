class Solution {
public:
    int min(int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp) {

        if(m <= 0 || n <= 0) {
            return 0;
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0 && j == 0) {
                   dp[i][j] = grid[i][j];
                } else if(i == 0) {
                    dp[i][j] = dp[i][j - 1] + grid[i][j];
                } else if(j == 0) {
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                } else {
                    dp[i][j] = (dp[i - 1][j] < dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1]) + grid[i][j];
                }
            }
        }
        int result = dp[m - 1][n - 1];
        return result;
    }

    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0) {
            return 0;
        }

        if(grid[0].size() == 0) {
            return 0;
        }

        int m = grid.size();
        int n = grid[0].size();

        vector<int> init_vector(grid[0].size(), 0);
        vector<vector<int>> dp(grid.size(), init_vector);

        int result = min(m, n, grid, dp);
        return result;
    }
};
