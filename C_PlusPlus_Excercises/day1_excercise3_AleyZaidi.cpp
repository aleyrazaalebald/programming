#include <iostream>
#include <string>

int main() 
{
	/*
	14 Strings
	Write a program that defines two strings. Join them together and assign the result to a
	third string. Print out the value of the resulting string.
	*/
	std::string s1 = "Hello";
	std::string s2 = "World";
	std::string s3 = s1 + " " + s2;
	std::cout << "sum of your strings is  " << s3 << '\n';

	/*
	15 Strings from Standard Input
	Write a program that accepts the first and the last name from the standard input using
	the std::getline function.Store the input in a single string called fullname.Print out
	the string.
	*/
	std::string firstName, lastName;

	std::cout << " Enter your first name" << '\n';
	std::getline(std::cin, firstName);
	
	std::cout << " Enter your last name" << '\n';
	std::getline(std::cin, lastName);

	std::string fullName = firstName + " " + lastName;
	std::cout << "Full Name: " << fullName << '\n';
	

	/*
	16 Creating a Substring
	Write a program that creates two substrings from the main string.The main string is
	made up of first and last names and is equal to "John Doe." The first substring is the first
	name.The second substring is the last name.Print out the main string and two substrings
	afterward.
	*/

	std::string mainString = "John Doe";
	std::string firstSubString = mainString.substr(0,4);
	std::string lastSubString = mainString.substr(5);
	std::cout << " main Name is " << mainString << '\n';
	std::cout << " firstSubString " << firstSubString << '\n';
	std::cout << " lastSubString " << lastSubString << '\n';


	/*
	17 Automatic Type Deduction
	Write a program that automatically deduces the type for char, int, and double objects
	based on the initializer used. Print out the values.
	*/

	auto i = 5; // int
	auto f = 1.2;// float
	auto c = 'A'; // char
	std::cout << " i = " << i << " f = " << f << " c = " << c << '\n';



}