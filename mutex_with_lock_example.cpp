#include <thread>
#include <mutex>
#include <iostream>

// shared resouce
int number = 0;

std::mutex mtx;



void increment() {
	mtx.lock();
	for (int i = 0; i < 1000000; i++) {
		number++;
	}
	mtx.unlock();
}

int main() 
{
	// create thread 1
	std::thread t1(increment);

	// create thread 2
	std::thread t2(increment);

	t1.join();
	t2.join();

	// believe me, if you run N0 times this program, you will always get 
	// CORRECT result which 200000, because we are locking the resource before 
	// access 
	std::cout << " number after execution of t1 and t2 s " << number << '\n';
	return 0;
}