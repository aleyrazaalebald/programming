#include <iostream>

class person 
{
private: 
	std::string name;
	int unsigned age; // take only positive numbers
	
public:
	// 3 arg constructor
	person(std::string argname, int unsigned argage) : name(argname), age(argage) { std::cout << "3 arg constructor called" << '\n'; };
	
	// copy constructor
	 person(const person& other) {
		 std::cout << "copy constructor called" << '\n'; 
		 name = other.name;
		 age = other.age;
	};

	 // copy assignment
	 person& operator=(const person& rhs) { 
		 if (this == &rhs) return *this;
		 name = rhs.name;
		 age = rhs.age;
		 return *this;
	 }

	 // setter
	 void setname(const std::string& s) { name = s; }
	 void setage(int a) { age = a; }


	 void print() noexcept 
	 {
		 std::cout << "name = " << name << ", Age " << age << '\n';
	 }
	
};

int main() 
{
	person p1("Aley", 46);
	person p2("Raza", 47);
	person p3(p1); 
	const std::string othername{ "zaidi" };
	p1.print();
	p2.print();
	p3.print();
	std::cout << "\n-------------\n";
	p1.setname(othername);
	p1.print();
	p2.print();
	p3.print();
	std::cout << "\n-------------\n";
	person p4("Zareen", 40);
	p4.print();
	p4 = p2;
	p4.print();
	


}