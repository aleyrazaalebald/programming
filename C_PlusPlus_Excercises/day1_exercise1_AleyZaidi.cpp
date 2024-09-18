
#include <iostream>
int main()
{
	/* Exercise 1
	01 Hello World and Comments
	Write a program that has a comment in it, outputs "Hello World." on one line, and "C++
	rocks!" on a new line.
	*/
	std::cout << "Hello World." << '\n' << "C++ rocks!" << '\n';



	/* 02 Declaration
	Write a program that declares three variables inside the main function.Variables are of
	types char, int, and double.The names of the variables are arbitrary.Since we do not
	use any input or output, we do not need to include the <iostream> header.
	*/
	char c;
	int i;
	double d;

	/* 03 Definition
	Write a program that defines three variables inside the main function.The variables are
	of types char, int, and double.The names of the variables are arbitrary.The initializers
	are arbitrary.
	*/

	char cc = 'a';
	int ii = 10;
	double dd = 10.5;


	/* 04 Initialization
	Write a program that defines three variables inside the main function.The variables are
	of types char, int, and double.The names of the variables are arbitrary.The initializers
	are arbitrary.The initialization is performed using the initializer list.Print out the
	values afterward.
	*/

	char ccc = 'a';
	int iii = 10;
	double ddd = 10.5;
	std::cout << "cc = " << ccc << "ii = " << iii << "dd = " << ddd << '\n';

	/* 05 Standard Input
	Write a program that accepts an integer number from the standard input and then print out
	that number.
	of type double.Print out the values afterward.
	*/
	int inputNumber;
	std::cout << "Press a number" << '\n';
	std::cin >> inputNumber;
	std::cout << "you entered: " << inputNumber << '\n';


	/* 06 Two Inputs
	Write a program that accepts two integer numbers from the standard input and then
	prints them out.
	of type double.Print out the values afterward.
	*/
	int firstNumber;
	double secondNumber;
	std::cout << "Press two number. one integer and second double" << '\n';
	std::cin >> inputNumber >> secondNumber;
	std::cout << "first number: " << inputNumber << " second number: " << secondNumber << '\n';


	/* 07 Multiple Inputs
	Write a program that accepts three values of type char, int, and double respectfully from
	the standard input.Print out the values afterward.
	of type double.Print out the values afterward.
	*/

	int i1;
	double d1;
	char c1;
	std::cout << "Press anumber. one integer and second double" << '\n';
	std::cin >> i1 >> d1;
	std::cout << "Press a character" << '\n';
	std::cin >> c1;
	std::cout << "integer: " << i1 << " double: " << d1 << " character: " << c1 << '\n';



	/* 08 Inputs and Arithmetic Operations
	Write a program that accepts two int numbers, sums them up, and assigns a result to a
	third integer.Print out the result afterward.
	of type double.Print out the values afterward.
	*/

	int a8, a9;
	
	std::cout << "enter two number." << '\n';
	std::cin >> a8 >> a9;
	int result = a8 +a9;
	std::cout << "Sum of your entered number is: " << result << '\n';


	/* 09 Post - Increment and Compound Assignment
	Write a program that defines an int variable called x with a value of 123, post - increments
	that value in the next statement, and adds the value of 20 in the following
	statement using the compound assignment operator. Print out the value afterward.
	of type double.Print out the values afterward.
	*/
	int x = 123;
	x += 20;
	std::cout << "x = " << x << '\n';


	/* 10 Integral and Floating - point Division
	Write a program that divides numbers 9 and 2 and assigns a result to an int and a
	double variable.Then modify one of the operands so that it is of type double, and observe
	the different outcomes of a floating - point division where at least one of the operands is
	of type double.Print out the values afterward.
	*/
	int a10 = 9;
	int f10 = 2;
	int division = a10 / f10;
	std::cout << "division of int/float = " << division << '\n';



}

