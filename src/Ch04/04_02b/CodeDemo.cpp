// Complete Guide to C++ Programming Foundations
// Exercise 04_02
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    // A pointer variable is declared using an * in the identifier
    int *ptr;

    // The address of A: & is the "address of" operator
    ptr = &a;

    std::cout << "             The value of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    // This should be the same as above
    std::cout << "           The address of a is " << &a << std::endl;
    // This should be the value of a
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    // This is were the address of a is stored 
    std::cout << "         The address of ptr is " << &ptr << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
