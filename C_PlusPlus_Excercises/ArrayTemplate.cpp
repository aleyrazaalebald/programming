// write a template based Array class with a pointer and size and two methods ctor and print its elements.

#include <iostream>


template<typename T>
class Array 
{
private:
	T* ptr;   // pointer as per template datatype
	int size; // array size
public:
	Array<T>(T arg[], int s);  // while using a class, do mention <T> in the class name, ctor
							   // only function declaration, implementation is outside the class
	
	void print();  // only function declaration, implementation is outside the class
};

// if function impl. is outside class then we have to mention template<typename T> one more time.
template<typename T> Array<T>::Array(T arg[], int s) 
{
	std::cout << "ctor is called" << '\n';
	ptr = new T[s]; // array pointer is pointing to first element of array
	size = s;
	for(int i = 0; i < s; i++)
	{
		ptr[i] = arg[i];  // ptr[i] accesing array element via index subscripting	
	}
}

template <typename T> void Array<T>::print()
{
	std::cout << "print is called" << '\n';
	for (int i = 0; i < size; i++ )
	{
		std::cout << *(ptr + i) << '\n';
	}
}

int main()
{
	int arr[5] = {0, 1, 2, 3, 4};
	Array<int> a(arr, 5);
	a.print();


	std::string arr2[2] = { "Aley", "Raza"};
	Array<std::string> a2(arr2, 2);
	a2.print();


	char arr3[3] = { 'A', 'R' , 'Z'};
	Array<char> a3(arr3, 3);
	a3.print();



	return 0;
}
