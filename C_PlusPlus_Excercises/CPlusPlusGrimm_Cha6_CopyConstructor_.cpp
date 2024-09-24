/*
* Copy Constructor
*/
#include <iostream>
#include <string>

class copyCons
{
private:
	int x;
	int y;

public:
	// fucntion declration + definition
	void setx(int argx) { x = argx; }
	void sety(int argy) { y = argy; }

	//function declaration only
	int getx();
	int gety();

	// default or no-arg constructor
	copyCons() : x{ 0 }, y{ 0 } { std::cout << "default no-arg constructor is called" << '\n'; };

	// 2-arg constructor
	copyCons(int argx, int argy) : x{ argx }, y{ argy } { std::cout << "2-arg constructor is called" << '\n'; };

	// copy constructor
	copyCons(const copyCons& rhs) : x{ rhs.x }, y{ rhs.y } { std::cout << "copy constructor is called" << '\n'; }

	// static member
	static void printdata (const copyCons& c...) 
	{
		std::cout << "Print Data is called. x = " << c.x << ", y = " << c.y << '\n';
	}

};

// function definition outside class therefore always mit Class Name and resolution operator::
int copyCons::getx() 
{ 
	return x; 
}
int copyCons::gety() { return y; }



int main()
{
	copyCons cc1;
	copyCons cc2(9, 10);
	copyCons cc3 = cc1;
	copyCons cc4(cc2);

	copyCons::printdata(cc1);
	copyCons::printdata(cc2);
	copyCons::printdata(cc3);
	copyCons::printdata(cc4);
	


	



}