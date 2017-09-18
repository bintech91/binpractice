#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solution() {
    vector<int> array_B;
    int N;

    array_B.reserve(1000000);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int B;
        cin >> B;
        array_B.push_back(B);
    }

    int  low = 0;
    int hi = 0;

    for (int i =  1; i < N; i++) {
        int high_to_low_diff = abs(array_B[i - 1] - 1);
        int low_to_high_diff = abs(array_B[i] - 1);
        int high_to_high_diff = abs(array_B[i] - array_B[i - 1]);
        int low_next = max(low, hi + high_to_low_diff);
        int hi_next = max(hi + high_to_high_diff, low + low_to_high_diff);
        low = low_next;
        hi = hi_next;
    }

    cout << max(hi,low) << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        solution();
    }
    return 0;
}
