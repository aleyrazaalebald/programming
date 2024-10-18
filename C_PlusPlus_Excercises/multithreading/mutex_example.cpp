#include <thread>
#include <mutex>
#include <iostream>

// shared resouce
int number = 0;

void increment() {

	for (int i = 0; i < 1000000; i++) {
		number++;
	}
}

int main() 
{
	// create thread 1
	std::thread t1(increment);

	// create thread 2
	std::thread t2(increment);

	t1.join();
	t2.join();

	// believe me, if you run 10 times this program, you will always get a
	// different result but shared reource which is the variable "number" 
	// is not locked before accessing. 
	std::cout << " number after execution of t1 and t2 s " << number << '\n';
	return 0;
}