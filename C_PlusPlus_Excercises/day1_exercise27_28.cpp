#include <iostream>
#include <string>


void custommessage(const std::string&);


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


	/* 28 Function Overloads
	Write a program having two function overloads. The functions are called division,
	and both accept two parameters. They divide the parameters and return the result to
	themselves. The first function overload is of type int and has two parameters of types
	int. The second overload is of type double and accepts two parameters of type double.
	Invoke the appropriate overload in main, first by supplying integer arguments and then
	the double arguments. Observe different results.
	*/



}






void custommessage(const std::string& a) {
	std::cout << "the value at this address is " << a << '\n';
}