#include <iostream>
#include <string>
#include "practice_template.h"

template <typename T>
TypeOperator<T>::TypeOperator() {

}

template <typename T>
TypeOperator<T>::~TypeOperator() {

}
template <typename T>
T TypeOperator<T>::Add(T a, T b) {
	return a;
}

template <typename T>
T TypeOperator<T>::Subtract(T a, T b) {
	return b;
}


int main(int argc, char const *argv[])
{
	/* code */
	TypeOperator<std::string> test_operator;
	std::string a = "hello aaaaa";
	std::string b = "hello bbbbb";

	std::cout << test_operator.Add(a,b) << std::endl;
	std::cout << test_operator.Subtract(a,b) << std::endl;

	TypeOperator<int> test_operator_1;
	int a_1 = 1;
	int b_1 = 2;

	std::cout << test_operator_1.Add(a_1,b_1) << std::endl;
	std::cout << test_operator_1.Subtract(a_1,b_1) << std::endl;

	return 0;
}