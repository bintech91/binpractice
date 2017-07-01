#include <iostream>
#include <string>
#include <queue>

using namespace std;

void solution(){
    string input;
    queue<char> q_check;
    
    cin >> input;

    for(char& c: input){
        if(c == '1'){
            q_check.push(c);
        }
    }
    
    int result = q_check.size()* (q_check.size() - 1) / 2;
    cout << result << endl;
}
int main() {
	//code
	int num_test_case;
	
	cin >> num_test_case;
	
	for(int i = 0; i < num_test_case; i++){
	    solution();
	}
	return 0;
}