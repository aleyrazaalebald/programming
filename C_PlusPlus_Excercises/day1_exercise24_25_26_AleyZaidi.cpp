#include <iostream>
#include <string>

/*
27 Passing Arguments
Write a program that has a function of type void called custommessage. The function
accepts one parameter by reference to const of type std::string and outputs a custom
message on the standard output using that parameter’s value. Invoke the function in
the main program with a local string.

28 Function Overloads
Write a program having two function overloads. The functions are called division,
and both accept two parameters. They divide the parameters and return the result to
themselves. The first function overload is of type int and has two parameters of types
int. The second overload is of type double and accepts two parameters of type double.
Invoke the appropriate overload in main, first by supplying integer arguments and then
the double arguments. Observe different results.

*/
void printmessage();
int multiplication(int, int);

int main() 
{
	/*
	24 Function Definition
	Write a program that defines a function of type void called printmessage(). The
	function outputs a "Hello World from a function." message on the standard output.
	Invoke the function from the main program.
	*/
	void printmessage();
	
	/*
	25 Separate Declaration and Definition
	Write a program that declares and defines a function of type void called
	printmessage(). The function outputs a "Hello World from a function." message on
	the standard output. Invoke the function from the main program.
	*/
	void printmessage();

	/*
	26 Function Parameters
	Write a program that has a function of type int called multiplication accepting two
	int parameters by value. The function multiplies those two parameters and returns a
	result. Invoke the function in the main program and assign a result of the function to
	a local int variable. Print out the result in the console.
	*/
	int result = multiplication(5, 6);
	std::cout << "calling multiplication " << multiplication(5, 6) << '\n';

}

void printmessage() 
{
	std::cout << "Hello World" << '\n';
}


int multiplication(int a, int b) {
	return a * b;
}