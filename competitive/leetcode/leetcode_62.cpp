class Solution {
public:
    vector<vector<int>> matrix;

    bool is_initialized = false;

    void initialize() {
        vector<int> init_vec(100,0);

        for(int i = 0; i < 100; i++) {
            matrix.push_back(init_vec);
        }
    }

    int uniquePaths(int m, int n) {
        if(is_initialized == false) {
            initialize();
            is_initialized = true;
        }
        if(m <= 0 || n <= 0) {
            return 0;
        }

        if(m == 1 && n == 1) {
            return 1;
        }

        if(matrix[m - 1][n - 1] != 0) {
            return matrix[m - 1][n - 1];
        }

        matrix[m - 1][n - 1] = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
        return matrix[m - 1][n - 1];
    }
};
