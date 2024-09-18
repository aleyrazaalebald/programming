#include <iostream>
#include <string>
#include <typeinfo>

/*
* This progam explains about address of operator (&). its say that the address-of operator (&) doesn’t return the address of its operand as a 
literal. Instead, it returns a pointer containing the address of the operand-

The size of a pointer is dependent upon the architecture the executable is compiled for a 32-bit executable uses 32-bit memory addresses 
consequently, a pointer on a 32-bit machine is 32 bits (4 bytes). With a 64-bit executable, a pointer would be 64 bits (8 bytes). 
Note that this is true regardless of the size of the object being pointed to:
*/

int main()
{
    // pointer type
    int x{ 5 };
    std::cout << "typeid(&x).name() = " << typeid(&x).name() << '\n'; // on x86 architecture, 64 bit Windwos 11 computer it prints typeid(&x).name() = int* __ptr64
    
    //pointer size
    char cc{'A'};    // character is on 1 byte
    double d {732.2564};    // double is of 8 bytes
    int i { 732 };    // double is on 4 byte
    char* c{};       // character itself is on 1 byte but here we have a pointer
    int* iPtr{};     // int datatype is of 4 byte
    double* ldPtr{}; // double datatype of 8 byte
    std::cout << " character sizeof(cc) = " << sizeof(cc) << '\n';
    std::cout << " int sizeof(i) = " << sizeof(i) << '\n';
    std::cout << " double sizeof(dd) = " << sizeof(d) << '\n';
    std::cout << " character pointer sizeof(c) = " << sizeof(c) << '\n';         // on x86 architecture, 64 bit Windwos 11 computer it prints 8 bytes 
    std::cout << " int pointer sizeof(iPtr) = " << sizeof(iPtr) << '\n';   // on x86 architecture, 64 bit Windwos 11 computer it prints 8 bytes 
    std::cout << " doulbe sizeof(ldPtr) = " << sizeof(ldPtr) << '\n'; // on x86 architecture, 64 bit Windwos 11 computer it prints 8 bytes 
    return 0;




}
