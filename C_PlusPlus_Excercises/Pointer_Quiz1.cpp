/*
* Quiz - What it will print. Assume short is of 2 bytes and 32 bit machine
*/
#include <iostream>
#include <string>

int main()
{
	short value{ 7 }; // &value = 0012FF60
	short otherValue{ 3 }; // &otherValue = 0012FF54

	short* ptr{ &value };  

	std::cout << &value << '\n'; // memory address 0012FF60
	std::cout << value << '\n';  // 7, value
	std::cout << ptr << '\n';    // memory address 0012FF60
	std::cout << *ptr << '\n';   // value by dereferencing
	std::cout << '\n';           // new line

	*ptr = 9;                    // pointer value  is set to 9

	std::cout << &value << '\n'; // memory address 0012FF60
	std::cout << value << '\n';  // new value 9, (set by pointer)
	std::cout << ptr << '\n';    // memory address 0012FF60
	std::cout << *ptr << '\n';   // new value 9, by deferenrcing
	std::cout << '\n';           // new line

	ptr = &otherValue;           // set ptr to memory 0012FF54

	std::cout << &otherValue << '\n'; // memory 0012FF54
	std::cout << otherValue << '\n';  // value 3
	std::cout << ptr << '\n';         // memory 0012FF54
	std::cout << *ptr << '\n';        // value 3 by dereferencing  
	std::cout << '\n';                // new line

	std::cout << sizeof(ptr) << '\n'; // 8 bytes on 64 bits machine 
	std::cout << sizeof(*ptr) << '\n';// size of value data type which is SHORT, it takes 2 bytes on 64 bits machine 

	return 0;
}