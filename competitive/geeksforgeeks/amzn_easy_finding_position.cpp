#include <iostream>
using namespace std;

void solution(){
    int number;
    
    cin >> number;
    
    //last person in the queue is the biggest 2^k position <= number
    
    // find 1000..0000
    
    int bin_num = 1;
    
    for(int i = 0; i < 32; i++){
        if(bin_num > number){
            cout << (bin_num >> 1) << endl;
            break;
        } else if(bin_num == number){
            cout << bin_num;
        } else {
            bin_num = bin_num << 1;
        }
    }
}

int main() {
	//code
	int num_test;
	
	cin >> num_test;
	
	for(int i = 0; i < num_test; i++){
	    solution();
	}
	return 0;
}