#include <iostream>

//One function works for all data types. 
// This would work even for user defiend types. 
// if operator '>' is overloaded
template <typename T>
T myMax(T x, T y) 
{
	return x > y ? x : y;
}

int main() 
{
	// call myMax for int
	std::cout << "myMax<int>(13, 4) = " << myMax<int>(13, 4) << '\n';

	// call myMax for double
	std::cout << "myMax<double>(1.3, 4.1) = " << myMax<double>(1.3, 4.1) << '\n';

	// call myMax for char
	std::cout << "myMax<char>('A', 'G') = " << myMax<char>('A', 'G') << '\n';

}
