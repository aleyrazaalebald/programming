/*
class exception

class runtime_error : public exception
class logic_error : public exception
class bad_cast : public exception
class bad_alloc : public exception

exception:
    runtime_error:
	system_error
	underflow_error
	overflow_error
	..
	..

	logic_error:
		domain_error
		invalid_argument
		length_error
		out_of_range
		..
		..
    bad_cast

	bad_alloc



*/
#include <stdexcept>
#include <cstdio>
#include <iostream>
#include <format>
using namespace std;

/*
_EXPORT_STD class out_of_range : public logic_error { // base of all out-of-range exceptions
public:
	using _Mybase = logic_error;

	explicit out_of_range(const string& _Message) : _Mybase(_Message.c_str()) {}

	explicit out_of_range(const char* _Message) : _Mybase(_Message) {}

#if !_HAS_EXCEPTIONS
protected:
	void _Doraise() const override { // perform class-specific exception handling
		_RAISE(*this);
	}
#endif // !_HAS_EXCEPTIONS
};
*/
	
struct Groucho {
	void forget(int x) {
		if (x == 11) {
			throw std::runtime_error {"I'd be glad to make an exception." };
		}
		else if (x == 4) {
			throw std::length_error{"throwing is length error"};
		}
		std::cout << "Forgot: " << x << '\n';
	}
};


int main() 
{
	Groucho groucho;
	try {
		groucho.forget(2);
		groucho.forget(1);
		groucho.forget(3);
		groucho.forget(4);

	}

	catch (const std::logic_error& ex) {
		std::cout << "caught by logic_error and ex.what() = " << ex.what() << '\n';
	}

	catch (const std::runtime_error& ex) {
		std::cout << "caught by logic_error and ex.what() = " << ex.what() << '\n';
	}
}
