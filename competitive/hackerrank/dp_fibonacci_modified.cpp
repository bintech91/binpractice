#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;

void solution() {
    vector<long long> array_fib;

    uint128_t t0 = 0;
    uint128_t t1 = 0;
    uint128_t n = 0;
    cin >> t0;
    cin >> t1;
    cin >> n;

    array_fib.reserve(n);
    array_fib.push_back(t0);
    array_fib.push_back(t1);

    for (int i = 2; i < n; i++) {
        uint128_t ti = array_fib[i - 1] * array_fib[i - 1] + array_fib[i - 2];
        array_fib.push_back(ti);
        cout << i << "\t" << array_fib[i] << endl;
    }

    cout << array_fib[n - 1]  << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test_case;

    solution();
    return 0;
}
