#include <iostream>
#include <vector>
using namespace std;

void solution() {
	int array_size;

	vector<int> array;
	vector<int> array_right_max;

	array.reserve(100);
	array_right_max.reserve(100);

	cin >> array_size;
	for (int i = 0; i < array_size; i++) {
		int num;
		cin >> num;
		array.push_back(num);
		array_right_max.push_back(0);
	}

	int max = -1;
	for (int i = (array_size - 1); i >= 0; i--) {
		array_right_max[i] = max;
		if (array[i] > max) {
			max = array[i];
		}
	}

	for (int i = 0; i < array_size; i++) {
		cout << array_right_max[i] << " ";
	}
	cout << endl;
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