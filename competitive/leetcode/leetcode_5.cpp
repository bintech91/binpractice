class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() == 1) {
            return s;
        }

        int max = 1;
        int first_index = 0;

        vector<bool> init_vec(s.size(), false);

        vector<vector<bool>> matrix_dyn(s.size(), init_vec);

        for(int i = 0; i < s.size(); i++) {
            matrix_dyn[i][i] = true;
        }

        for(int i = 0; i < s.size() - 1; i++) {
            if(s.at(i) == s.at(i + 1)) {
                matrix_dyn[i][i + 1] = true;
                max = 2;
                first_index = i;
            }
        }

        for(int j = 2; j < s.size(); j++) {
            for(int i = 0; i < s.size() - j; i++) {
                if(matrix_dyn[i + 1][j + i - 1] == true && s.at(i) == s.at(j + i)) {
                    matrix_dyn[i][j + i] = true;
                    if(j + 1 > max) {
                        max = j + 1;
                        first_index = i;
                    }
                }
            }
        }

        return s.substr(first_index, max);
    }
};
