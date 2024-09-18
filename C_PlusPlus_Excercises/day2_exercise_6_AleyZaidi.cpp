/*

07 Class with Member Function
Write a program that defines a class called MyClass with one member function called
printmessage(). Define the printmessage() member function inside the class and
make it output the hard-coded "Hello World" message. Create an instance of that
class and use the object to call the class member function.

08 Class with Data and Function Members
Write a program that defines a class called MyClass with one member function called
printmessage(). Define the printmessage() member function outside the class and
have it output the "Hello World." string. Create an instance of that class and use the
object to call the member function.

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
	int i;
	char c;
	bool b;
public:
	int getI() const;
	void setI(int);
	char getC() const;
	void setC(char);
	bool getB() const;
	void setB(bool);

};

int MyClass::getI() const
{
	return i;
}	
void MyClass::setI(int argx) 
{
	i = argx;
}


char MyClass::getC() const
{
	return c;
}
void MyClass::setC(char argx)
{
	c = argx;
}

bool MyClass::getB() const
{
	return b;
}
void MyClass::setB(bool argx)
{
	b = argx;
}


int main()
{
	/*
	06 Class with Data Members
	Write a program that defines a class called MyClass with three data members of type
	char, int, and bool. Make an instance of that class inside the main function.
	*/
	MyClass o;
	o.setI(5);
	o.setB(false);
	o.setC('A');

	std::cout << " o.b = " << o.getB() << " o.c = " << o.getC() << " o.I = " << o.getI() << '\n';
}