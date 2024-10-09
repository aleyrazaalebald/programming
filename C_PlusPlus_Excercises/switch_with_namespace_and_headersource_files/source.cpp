#include "calculator.h"

int main(void) {

	int a, b, choice;
	CAL::Calculator calculator = CAL::Calculator();


	std::cout << "##################\nCALCULATOR\n##################" << '\n';
	
	while(true) 
	{
		std::cout << "Enter first Number" <<'\n';
		std::cin >> a;
	
		std::cout << "Enter second Number" << '\n';
		std::cin >> b;

		std::cout << "Select one option1, 2, 3 or 4: " << '\n';
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "a = " << a << ", b = " << b << ", operation = " << choice << '\n' << "result = " << calculator.add(a, b);
			break;
		case 2:
			std::cout << "a = " << a << ", b = " << b << ", operation = " << choice << '\n' << "result = " << calculator.subtract(a, b);
			break;
		case 3:
			std::cout << "a = " << a << ", b = " << b << ", operation = " << choice << '\n' << "result = " << calculator.multiply(a, b);
			break;
		case 4:
			std::cout << "a = " << a << ", b = " << b << ", operation = " << choice << '\n' << "result = " << calculator.divide(a, b);
			break;
		default:
			break;
		}
		std::cout << "\n-------------------------\n";

	}

}