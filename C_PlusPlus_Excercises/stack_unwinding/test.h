#pragma once
#ifndef STACK_UNWINDING
#define STACK_UNWINDING
#include <iostream>

namespace N 
{
	class test
	{
	private:
		std::string str;
	public:
		test() : str("") {};  // default ctor
		test(const std::string& s) : str(s) { std::cout << "copy ctor called for str = " << s << '\n'; } //copy ctor
		~test() // destructor
		{
			//if this destructor is called from excpetion, the uncaught_expcetion will return something
			std::cout << "dtor called" << str << " uncaught exception = " << std::uncaught_exception() << '\n'; 
		}
		void printHello(); // to be implemented
	};
}
#endif // !1

