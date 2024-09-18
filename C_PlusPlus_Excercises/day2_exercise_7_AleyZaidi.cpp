/*
07 Class with Member Function
Write a program that defines a class called MyClass with one member function called
printmessage(). Define the printmessage() member function inside the class and
make it output the hard-coded "Hello World" message. Create an instance of that
class and use the object to call the class member function.

*/

#include <iostream>
class MyClass
{
public: 
	void printMessage() 
	{
		std::cout << "Hello World" << '\n';
	}
};


int main()
{
	MyClass o;
	o.printMessage();
	
}