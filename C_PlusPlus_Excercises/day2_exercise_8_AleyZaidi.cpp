/*
08 Class with Data and Function Members
Write a program that defines a class called MyClass with one member function called
printmessage(). Define the printmessage() member function outside the class and
have it output the "Hello World." string. Create an instance of that class and use the
object to call the member function.

*/

#include <iostream>
class MyClass
{
public:
	void printMessage();
};

void MyClass::printMessage()
{
	std::cout << "Hello World" << '\n';
}

int main()
{
	MyClass o;
	o.printMessage();
	
}