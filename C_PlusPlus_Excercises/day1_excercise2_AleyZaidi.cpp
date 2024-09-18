#include <iostream>
int main() 
{
	/* 11 Array Definition
	Write a program that defines and initializes an array of five doubles.Change and print
	out the values of the first and last array elements.
	*/
	
	double darr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	darr[0] = 11.11;
	for (int i = 0; i < 5; i++)
	{
		std::cout << darr[i] << '\n';
	}

	/*
	12 Pointer to an Object
	Write a program that defines an object of type double.Define a pointer that points to that
	object.Print out the value of the pointed - to object by dereferencing a pointer.
	*/

	double d = 3.3;
	double* p = &d;
	std::cout << "d = " << *p << '\n';



	/*
	13 Reference Type
	Write a program that defines an object of type double, called mydouble.Define an object
	of reference type called myreference, and initialize it with mydouble.Change the value of
	myreference.Print out the object value using both the reference and the original variable.
	Change the value of mydouble.Print out the value of both objects.
	*/

	double mydouble = 33.33;
	double& myreference = mydouble;
	std::cout << "mydouble = " << mydouble << '\n';
	std::cout << "myreference = " << myreference << '\n';

	mydouble = 44.44;
	std::cout << "new value for myreference = " << myreference << '\n';


}
