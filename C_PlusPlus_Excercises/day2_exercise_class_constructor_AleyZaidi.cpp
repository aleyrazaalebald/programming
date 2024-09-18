/*
10 User-defined Default Constructor and Destructor
Write a program that defines a class called MyClass with a user-defined default
constructor and user-defined destructor. Define both constructor and destructor outside the class.
Both member functions will output a free-to-choose text on the standard output. Create an
object of a class in function main.

*/

#include <iostream>
class MyClass
{
private:
	int x;
	double d;
public:
	MyClass(int argx, double argd) : x{ argx }, d{ argd }
	{
		std::cout << "Object created. This is a constructor code " << '\n';
	}
	MyClass() : x{0}, d{0}
	{
		std::cout << "Default constructor invoked " << '\n';
	}
	void printdata() const
	{
		std::cout << x << ' ' << d << '\n';
	}
	~MyClass() {
		std::cout << "Destroying an obhjet. Destructor code invoked " << '\n';
	}
};

int main()
{
	MyClass o1{123, 456.789};
	MyClass o2{};
	o1.printdata();
	
	o2.printdata();

	// create an object on a heap:
	MyClass* p = new MyClass{ 10, 20.2 };
	p->printdata();
	//delete p; // At this point heap memory get de-allocated and object is desroyed
}