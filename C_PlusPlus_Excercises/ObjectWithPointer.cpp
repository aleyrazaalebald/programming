#include <iostream>
#include<string>
#include<memory>

class MyClass {
private:
	//data
	int x;
	int y;
	int memarr[2];
public:

	//fuction declaration + definiton
	void setx(int argx) { x = argx; }
	void sety(int argy) { y = argy; }

	//function declaration only
	int getx();
	int gety();

	//2 arg constructor
	MyClass(int argx, int argy) { x = argx; y = argy; std::cout << "2 arg constructor called\n"; };

    // another style of initializing constructor
	//MyClass(int argx, int argy) : x{ argx }, y{ argy } { std::cout << " another stype of initializing constructor called"; }

	//default constructor
	MyClass()
	{
		std::cout << "default no arg constuctor called" << '\n';
		x = 1; y = 1;
	}

	//Constructor with 1 passed argument. other member will get default value from constructor
	MyClass(int argx) : x{ argx }, y{ 999 } { std::cout << "1 arg constructor called\n"; };

	// constructor with 1 passed arguments, initializing array private data member with the same passed value.
	MyClass(int arg4Array) : memarr{ arg4Array, arg4Array } {}
};

	// class public function, defined outside class
	int MyClass::getx() {return x;}
	int MyClass::gety() {return y;}


int _temp_main()
{
	MyClass mc1; // object with zero arg constructor
	MyClass mc2(9); // obj with 1 passed arguement
	MyClass mc3(5, 4); // obj with 2 passed arguments

	MyClass mcarr[3]; // array of object, will initilize 3 default object with no argument constructor
	std::cout << "mcarr[0].x, mcarr[0].y = " << mcarr[0].getx() << ", " << mcarr[0].gety() << '\n';
	std::cout << "mcarr[1].x, mcarr[1].y = " << mcarr[1].getx() << ", " << mcarr[1].gety() << '\n';
	std::cout << "mcarr[2].x, mcarr[2].y = " << mcarr[2].getx() << ", " << mcarr[2].gety() << '\n';
	
	std::cout << "mc1.x, mc1.y = " << mc1.getx() << ", " << mc1.gety() << '\n';
	std::cout << "mc2.x, mc2.y = " << mc2.getx() << ", " << mc2.gety() << '\n';
	std::cout << "mc3.x, mc3.y = " << mc3.getx() << ", " << mc3.gety() << '\n';
	
	mcarr[0] = MyClass();  // marr[0] is already initialized. but now initialized again. mcarr[0] is pointing to this object on stack 
	mcarr[1] = MyClass(23); // marr[1] is already initialized. but now initialized again. mcarr[0] is pointing to this object on stack
	mcarr[2] = MyClass(43, 43); // marr[2] is already initialized. but now initialized again. mcarr[0] is pointing to this object on stack
	
	for (auto el : mcarr)
	{
		std::cout << "mcarr.x, mcarray.y = " << el.getx() << ", " << el.gety() << '\n';
	}
}