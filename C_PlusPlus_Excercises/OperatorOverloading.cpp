/*
Objects of classes can be used as operands in an expression. T o use them as operands, we need to overload the operators for complex types such as classes.
We can overload the following operators:
Arithmetic operators
binary operators
boolean operators, unary operators
comparison operators
compound operators,
function call operators
subscript operators

Author: ALEY RAZA ZAIDI
Date: 25.09.2024
*/

#include <iostream>
#include <string>

class MyClass
{

public:
	int x;
	double d;


	// no-arg construtor
	MyClass() : x{ 0 }, d{ 0 } {}
	
	// 2-arg construtor
	MyClass(int argx, double argd) : x{ argx }, d{ argd } {}

	// ++ overloading
	MyClass& operator++() {
		++x;
		++d;
		return *this;
	}

	// += Overloading
	MyClass & operator+=(int addition) {
		x += addition;
		d += addition;
		return *this;
	}

	// == Overloading
	bool operator==(MyClass obj) {
		std::cout << " == overloading is called" << '\n';
		return (x == obj.x) && (d == obj.d);
	}
};
int main()
{
	MyClass myobject;
	int a = 5;
	std::cout << "myobject.c = " << myobject.x << ", myobject.d = " << myobject.d << ", integer variable a = "<< a << '\n';
	
	// calling ++ function
	++myobject;
	++a;
	
	std::cout << "after calling ++myobject and ++a" << '\n';
	std::cout << "myobject.c = " << myobject.x << ", myobject.d = " << myobject.d << ", integer variable a = "<< a << '\n';

	// calling += with 10 
	std::cout << "calling += with 10" << '\n';
	myobject+=10;
	a+=10;

	std::cout << "after:" << '\n';
	std::cout << "myobject.c = " << myobject.x << ", myobject.d = " << myobject.d << ", integer variable a = " << a << '\n';

	// && Overloading test
	MyClass obj1(3, 4);
	MyClass obj2(3, 4);
	bool result = obj1 == obj2;
	std::cout << "obj1 == obj2 = " << result << '\n';
}
