#include <iostream>
#include <string>


void custommessage(const std::string&);
int division(int x, int y);
double division(double x, double y);


int main()
{
	/* 27 Passing Arguments
	Write a program that has a function of type void called custommessage.The function
	accepts one parameter by reference to const of type std::string and outputs a custom
	message on the standard output using that parameter’s value.Invoke the function in
	the main program with a local string.
	*/
	std::string s = "Hello World";
	custommessage(s);
	std::cout << " division 5 to 3 " << division(5, 3) << '\n';
	std::cout << " division 5 to 3 " << division(5.1, 3.1) << '\n';


	/* 28 Function Overloads
	Write a program having two function overloads. The functions are called division,
	and both accept two parameters. They divide the parameters and return the result to
	themselves. The first function overload is of type int and has two parameters of types
	int. The second overload is of type double and accepts two parameters of type double.
	Invoke the appropriate overload in main, first by supplying integer arguments and then
	the double arguments. Observe different results.
	*/
}


int division(int x, int y) 
{
	std::cout << " divsion int is called" << '\n';
	return x / y;
}
double division(double x, double y) 
{
	std::cout << " divsion double is called" << '\n';
	return x / y;
}


void custommessage(const std::string& a) {
	std::cout << "the value at this address is " << a << '\n';
}