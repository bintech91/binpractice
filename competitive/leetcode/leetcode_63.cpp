class Solution {
public:

    int uniquePathsResult(int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp) {

        if(m <= 0 || n <= 0) {
            return 0;
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    dp[i][j] = 0;
                    continue;
                }
                if(i == 0 && j == 0) {
                   dp[i][j] = 1;
                } else if(i == 0) {
                    dp[i][j] = dp[i][j - 1];
                } else if(j == 0) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        int result = dp[m - 1][n - 1];
        return result;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.size() == 0) {
            return 0;
        }

        if(obstacleGrid[0].size() == 0) {
            return 0;
        }

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<int> init_vector(obstacleGrid[0].size(), 0);
        vector<vector<int>> dp(obstacleGrid.size(), init_vector);

        int result = uniquePathsResult(m, n, obstacleGrid, dp);
        return result;
    }
};
