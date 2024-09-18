/*
09 Class Access Specifiers
Write a program that defines a class called MyClass with one private data member of
type int called x and two public member functions. The first member function called void setx(int
myvalue) will set the value of x to its parameter myvalue. The second member function
is called int getx(), and returns a value of x. Make an instance of the class
and use the object to access both member functions.
*/

#include <iostream>
class MyClass
{
private:
	int x;
public:
	int getx() const;
	void setx(int x);
};

int MyClass::getx() const
{
	return x;
}

void MyClass::setx(int argx)
{
	x = argx;
}

int main()
{
	MyClass o;
	o.setx(123);
	std::cout << " o .x = " << o.getx() << '\n';	
}