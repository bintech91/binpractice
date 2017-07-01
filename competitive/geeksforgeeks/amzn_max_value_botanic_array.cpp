#include <iostream>
#include <vector>

using namespace std;

void solution() {
	int n;
	vector<int> array;
	array.reserve(100);

	cin  >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		array.push_back(num);
	}

	int max = 0;

	for (int& num : array) {
		if (num > max) {
			max = num;
		} else {
			cout << max << endl;
			return;
		}
	}
}

int main() {
	//code
	int num_test;
	cin >> num_test;

	for (int i = 0; i < num_test; i++) {
		solution();
	}
	return 0;
}