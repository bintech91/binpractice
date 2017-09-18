#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:
    vector<int> sums_;

    NumArray(vector<int> nums) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
            sums_.push_back(sum);
        }
    }

    int sumRange(int i, int j) {
        if (i == 0) {
            return sums_[j];
        }
        return sums_[j] - sums_[i - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */

int main() {
    vector<int> nums_array = { -2, 0, 3, -5, 2, -1};
    NumArray * num_array = new NumArray(nums_array);

    int range = num_array->sumRange(0, 2);
    cout <<  range << endl;
}