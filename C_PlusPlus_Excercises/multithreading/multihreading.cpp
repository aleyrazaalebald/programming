#include <iostream>
#include <thread>

/* take pointer and increment the value in the memory pointed by pointer by 1 for {times} number of times */
void workFunc(int* ptr, size_t times)
{
	std::cout << "before variable value = " << *ptr << '\n';
	while(times--)  {
		*ptr += 1;
	}
	std::cout << "after variable value = " << *ptr << '\n';
}

int main() {
	int* numbers = new int[3];
	
	// initialize values to zero
	for(int i = 0; i < 3; i++) {
		*(numbers + i) = 0;
	}
	
	// create a separate thread and call the function and pass the 
	// pointer pointing to memory address of first element of this pointer array
	std::thread t1(workFunc, numbers, 500); 

	// create a separate thread and call the function and pass the 
	// pointer pointing to memory address of second element of this pointer array
	std::thread t2(workFunc, numbers + 1, 600);

	// create a separate thread and call the function and pass the 
	// pointer pointing to memory address of third element of this pointer array
	std::thread t3(workFunc, numbers + 2, 700);

	t1.join();
	t2.join();
	t3.join();

	for (int i = 0; i < 3; ++i)
		std::cout << "Number Slot " << (int)i << " is " << (int)numbers[i] << '\n';
	
	delete[] numbers;
	return 0;

}

