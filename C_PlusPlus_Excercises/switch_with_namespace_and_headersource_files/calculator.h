#pragma once
#ifndef ADD_HEADER
#define ADD_HEADER
#include <iostream>

namespace CAL
{
	class Calculator
	{
	public:
		Calculator() {} // default ctor
		~Calculator() {} // destructor

		int add(int, int);
		int subtract(int, int);
		int multiply(int, int);
		int divide(int, int);

	};
}
#endif // !ADD_HEADER



