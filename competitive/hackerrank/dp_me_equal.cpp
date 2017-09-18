#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> gap_operation(1001, 0);

int calculation_gap_operation(int gap);

void solution() {
	int num_people;
	cin >> num_people;

	vector<int> v_choco;
	v_choco.reserve(10000);
	for (int i = 0; i < num_people; i++) {
		int num_choco;
		cin >> num_choco;
		v_choco.push_back(num_choco);
	}

	sort(v_choco.begin(), v_choco.end());
	int cur = 0;
	int cur_i = 0;
	int oper = 0;
	int improve = 0;
	bool init = false;
	for (int i : v_choco) {
		if (init == false) {
			init = true;
			cur = i;
			continue;
		}
		int improve_i = i + improve;
		if (improve_i > cur) {
			int gap_oper = calculation_gap_operation(improve_i - cur);
			improve += improve_i - cur;
			oper = oper + gap_oper;
		}
		cur  = improve_i;
	}
	cout << oper << endl;
}

int calculation_gap_operation(int gap) {
	if (gap_operation[gap] > 0) {
		return gap_operation[gap];
	}
	int op_5 = (gap / 5);
	int gap_op_2 = gap - op_5 * 5;
	int op_2 = gap_op_2 / 2;
	int gap_op_1 = gap_op_2 - op_2* 2;
	int op_1 = gap_op_1;
	gap_operation[gap] = op_5 + op_2 + op_1;
	return gap_operation[gap];
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
