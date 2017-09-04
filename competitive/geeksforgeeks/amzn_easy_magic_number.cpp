#include <iostream>
#include <vector>
using namespace std;

vector<int> list_magic_number;
vector<int> list_power_five;
vector<int> list_sum_five;

int magic_number(int n) {
	if (n == 1) {
		return 5;
	}

	if (n < list_magic_number.size()) {
		return list_magic_number[n - 1];
	}
}
void solution() {
	int n;

	cin >> n;
	int num = magic_number(n);
	cout << num << endl;
}

int main() {
	//code
	list_magic_number.reserve(100);
	list_magic_number.push_back(5);
	list_power_five.reserve(100);
	list_power_five.push_back(5);
	list_sum_five.reserve(100);
	list_sum_five.push_back(5);

	while (list_magic_number.size() < 100) {
		list_power_five.push_back(list_power_five.back() * 5);
		list_magic_number.push_back(list_power_five.back());
		list_sum_five.push_back(list_power_five.back());
		vector<int> list_sum_tmp;
		list_sum_tmp.reserve(100);
		for (int& num : list_sum_five) {
			if (num < list_power_five.back()) {
				list_sum_tmp.push_back(list_power_five.back() + num);
			}
		}

		for (int& num : list_sum_tmp) {
			list_sum_five.push_back(num);
			list_magic_number.push_back(num);
		}
	}

	int num_test;

	cin >> num_test;

	for (int i = 0; i < num_test; i++) {
		solution();
	}

	return 0;
}