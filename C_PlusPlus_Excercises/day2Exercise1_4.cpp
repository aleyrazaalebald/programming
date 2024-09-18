#include <iostream>
#include <string>

/* 04 Enums
	Write a program that demonstrates the use of an enum representing days of the week.
*/
enum class WeekDays
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
};

int main() 
{

	/* 01 Dynamic Memory Allocation
	Write a program that dynamically allocates space for an object of a built - in type of your choice.
	Use the operator new.Dereference a pointer and assign a new value to the pointed - to object.
	Finally, deallocate a memory.
	*/
	int* p1 = new int;
	*p1 = 123;
	std::cout << "This variable p is created on stack/automatic memory. but the place to store value 123 is created on heap." << '\n';
	delete p1; // it will sotre 123 value from heap memory.


	/*
	02 Automatic and Dynamic Storage
	Write a program that creates a few automatic and dynamic objects of your choice.
	*/
	int a = 123; // created on stack. will be deleted automatically.
	char c = 'A'; // created on stack. will be deleted automatically.
	int* p2 = new int; // p is created on stack but this new obj is created on heap. this new allocated space need to be deleted manually.
	*p2 = 123;
	std::cout << "This variable p is created on stack/automatic memory. but the place to store value 123 is created on heap." << '\n';
	delete p2; // it will sotre 123 value from heap memory.

	/* 03 Dynamic Memory Allocation 2
	Write a program that dynamically allocates space for a single object and an array.
	Finally, deallocate a memory for both.
	*/
	int* p3 = new int[3];
	p3[0] = 11;
	p3[1] = 12;
	p3[2] = 13;
	std::cout << "Values: " << p3[0] << ' ' << p3[1] << ' ' << p3[2];
	delete[] p3; // de-allocate  memory

	
	std::string currentDay = WeekDays::TUESDAY;
	std::cout << "current day" << currentDay << '\n';


}

