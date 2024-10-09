#include "test.h"


// function 
void f(bool b)
{
	N::test t("auto f");
	std::cout << (b ? "f throwing excpetion\n" : "f running fine\n");
} // as soon as function scope end, dtor is called for object t, because it was defined inside function


int main()
{
	N::test t1("auto main");
	try 
	{
		N::test t2("in try in main");
		f(false);
		throw std::exception("my own");
		f(true);
		std::cout << "this will never be printed" << '\n';
	
	} 
	catch (std::exception& e) 
	{
		std::cout << "catch is called for e =  " << e.what() << "exception "<< '\n';			
//		std::cout << e.what() << '\n';
		

	
	}


}