#include <iostream>
#include <vector>

using namespace std;

void build_matrix(vector<vector<int>>& matrix, int row, int col) {

	for (int i = 0; i < row; i++) {
		vector<int> row_tmp;
		for (int j = 0; j < col; j++) {
			int num;
			cin >> num;
			row_tmp.push_back(num);
		}
		matrix.push_back(row_tmp);
	}
}

int sum_sub(vector<vector<int>>& matrix) {
	int x1, y1;
	int x2, y2;

	cin >> x1;
	cin >> y1;

	cin >> x2;
	cin >> y2;

	int sum = 0;
	for (int i = x1 - 1; i < x2; i++) {
		for (int j = y1 - 1; j < y2; j++) {
			sum += matrix[i][j];
		}
	}

	cout << sum << endl;
}

void solution() {
	int row, col;
	vector<vector<int>> matrix;

	cin >> row;
	cin >> col;

	build_matrix(matrix, row, col);
	sum_sub(matrix);
}

int main() {
	//code
	int test_num;
	cin >> test_num;
	for (int i = 0; i < test_num; i++) {
		solution();
	}
	return 0;
}