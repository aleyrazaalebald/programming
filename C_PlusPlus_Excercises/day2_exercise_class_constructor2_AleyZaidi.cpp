/*
11 Constructor Initializer List
Write a program that defines a class called MyClass, which has two private data
members of type int and double. Outside the class, define a user-provided constructor
accepting two parameters. The constructor initializes both data members with
arguments using the initializer. Outside the class, define a function called printdata()
which prints the values of both data members.
*/

#include <iostream>
class MyClass
{
private:
	int x;
	double d;
public:

	// constructor declaration
	MyClass(int argx, double argd);
	MyClass();
	~MyClass();
	void printdata() const;

};

// constructor outside the class
MyClass::MyClass(int argx, double argd) : x{ argx }, d{ argd }
{
	std::cout << "Object created. This is a constructor code defined outside class " << '\n';
}

// constructor outside the class
MyClass::MyClass() : x{ 0 }, d{ 0 }
{
	std::cout << "Default constructor invoked " << '\n';
}

//destructor defined outside the class
MyClass::~MyClass() {
	std::cout << "Destroying an obhjet. Destructor code invoked " << '\n';
}

// member function outside
void MyClass::printdata() const
{
	std::cout << x << ' ' << d << '\n';
}

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