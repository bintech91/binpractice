#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

void find_pair(vector<int>& a, vector<int>& b, int sum) {
	map<int, int> map_pair;
	vector<pair<int, int>> list_pair;

	for (int& num : b) {
		int value = num;
		map_pair.insert(make_pair(sum - value, value));
	}

	int i = 0;
	int check = -1;
	for (int& num : a) {
		map<int, int>::iterator iter = map_pair.find(num);
		if (iter != map_pair.end()) {
			check = 0;
			if (i == 0) {
				i = 1;
			} else  {
				cout << ", ";
			}
			cout << iter->first << " ";
			cout << iter->second;
		}
	}
	if (check == -1) {
		cout << check;
	}
	cout << endl;
}

void solution() {
	int a, b, x;
	vector<int> array_a;
	vector<int> array_b;

	cin >> a;
	cin >> b;
	cin >> x;

	array_a.reserve(1000);
	for (int i = 0; i < a; i++) {
		int num;
		cin >> num;
		array_a.push_back(num);
	}

	for (int i = 0; i < b; i++) {
		int num;
		cin >> num;
		array_b.push_back(num);
	}

	find_pair(array_a, array_b, x);
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