#include <iostream>
#include <string>

int main() {

	/*
	18 The if-statement
	Write a program that defines a boolean variable whose value is false. Use this variable as
	the condition inside the if-statement.
	*/
	bool a = false;
	if (!a) 
	{
		std::cout << "a is false";
	} else 
	{
		std::cout << "a is true";
	}
	/*
	19 Logical Operators
	Write a program that defines a variable of type int.Assign the value of 256 to the variable.
	Check if the value of this variable is greater than 100 and less than 300. Then, define a
	boolean variable with a value of true.Check if the int number is greater than 100 or if the
	value of a bool variable is true.Then define a second bool variable whose value will be
	the negation of the first bool variable.
	*/
	int i = 256;
	if (i > 100 && i < 300)
	{
		std::cout << " variable i is in between 100 and 300. it is " << i << '\n';
	}
	bool b = true;
	

	if (i > 100 or b) 
	{
		std::cout << " either variable i greater than 100 or the bool b is true. i = " << i << " and bool b = " << b << '\n';
	}

	bool c = !b;
	std::cout << " c = " << c << '\n';

	/*
	20 The switch - statement
	Write a program that defines a simple integer variable with a value of 3. Use the switch
	statement to check if the value is inside the[1..4] range.
	*/

	int switchCase = 12;
	switch (switchCase) {
	case 1:
		std::cout << "switchCase = 1 " << '\n';
		break;
	case 2:
		std::cout << "switchCase = 2 " << '\n';
		break;
	case 3:
		std::cout << "switchCase = 3 " << '\n';
		break;
	default:
		std::cout << "nothing is correct" << '\n';
	}

	/*
	21 The for-loop
	Write a program that uses a for-loop to print out the counter 15 times. The counter starts
	at 0.
	*/
	for (int loop = 1; loop <= 15; loop++) 
	{
		std::cout << " loop = " << loop << '\n';
	}


	/*
	22 Array and the for - loop
	Write a program that defines an array of 5 integers.Use the for - loop to print out the array
	elements and their indexes.
	*/
	double darr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	darr[0] = 11.11;
	for (int i = 0; i < 5; i++)
	{
		std::cout << darr[i] << '\n';
	}

	/*
	23 The const Type Qualifier
	Write a program that defines three objects of type const int, const double, and const
	std::string, respectively.Define a fourth const int object and initialize it with a value of
	the first const int object.Print out the values of all the variables.
	*/

	const int constI = 5;
	const double constD = 1.1;
	const char constC = 'A';
    
	// constexpr int& fourth = constI;  // not allowed, compile error. constexpr need a fix value
	// const int& fourth = constI; // allowed
	// constexpr int fourth = 4; // allowed
	const int& fourth = constI;
	std::cout << "constI = " << constI << ", constD = " << constD << ", constC = " << constI << ", fourth = " << fourth << '\n';
}