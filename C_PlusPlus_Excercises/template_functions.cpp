/* Template are a mechanism to support the so-called generic programming. we can use template when we want to define a class 
or a function that can accept any/all types...
*/
#include <iostream>

/*this function takes a generic type T and add 10 to it*/ 
template <typename T>
T addTen(T param)
{
	return param += 10;
}

template <typename T>
T addTwoNumbers(T arg1, T arg2)
{
	return arg1 + arg2;
}

template<typename T, typename U>
void showSstringNumberOfTimes(T text, U noOfTimes)
{
	for (int i = 0; i < noOfTimes; i++) 
	{
		std::cout << text << '\n';
	}
}


int main(void) {

	int a = 10;
	std::cout << " a = " << a << '\n';
	std::cout << " calling addTen<int>(5)" << '\n';
	a = addTen<int>(5);
	std::cout << " a = " << a << '\n';

	int b = 10;
	std::cout << " a = " << a  << " b = " << b << '\n';
	std::cout << " calling addTwoNumbers<int>(a, b)" << '\n';
	std::cout << " result = " << addTwoNumbers(a,b) << '\n';

	std::string text = "Hello World";
	showSstringNumberOfTimes<std::string, int>(text, 10);

}