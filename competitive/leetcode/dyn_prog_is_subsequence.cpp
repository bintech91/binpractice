#include  <iostream>
#include  <algorithm>
#include  <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string t_cache;

    unordered_map<char, vector<int>> t_cache_dp;

    void buildCacheT() {
        unordered_map<char, vector<int>> t_cache_dp_tmp;
        int index = 0;
        for (char& c : t_cache) {
            if (t_cache_dp_tmp.find(c) == t_cache_dp_tmp.end()) {
                vector<int> v_cache;
                v_cache.reserve(500000);
                v_cache.push_back(index);
                t_cache_dp_tmp.insert(make_pair(c, v_cache));
            } else {
                t_cache_dp_tmp[c].push_back(index);
            }

            index++;
        }
        t_cache_dp = t_cache_dp_tmp;
    }

    bool isSubsequence(string s, string t) {
        if (t.compare(t_cache) != 0) {
            t_cache = t;
            buildCacheT();
        }

        int index = MIN_INT;
        for (std::string::size_type i = 0; i < s.size(); ++i) {
            if (t_cache_dp.find(s[i]) == t_cache_dp.end()) {
                return false;
            } else {
                bool found = false;
                for (int cur_index : t_cache_dp[s[i]]) {
                    if (cur_index > index) {
                        index = cur_index;
                        found = true;
                        break;
                    }
                }
                if(found == false ){
                    return false;    
                }
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    string t = "ahbgdc";
    string s = "abc";
    bool result =  solution.isSubsequence(s, t);

    cout  << result  << endl;
}