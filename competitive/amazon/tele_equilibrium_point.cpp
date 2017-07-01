#include <vector>


int equilibrium_point(const std::vector<int>& array){

	int sum = 0;

	std::vector<int>::iterator iter = array.begin();
	std::vector<int>::iterator iterEnd = array.end();

	for(;iter != iterEnd; iter++){
		int number = *iter;

		sum +=number;
	}


	int half_sum = sum/2;
}

int main(){

}