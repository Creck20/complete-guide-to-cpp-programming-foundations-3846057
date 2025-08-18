// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){

    // Explicit declaration required for auto.
    // Int
    auto score = 8;
    // Long int
    auto points = 12345678901;
    // Float
    auto height = 6.2f;
    // Double
    auto duration = 9.0;
    // Bool
    auto is_active = true;
    //Char ''
    auto initial = 'P';
    // String ""
    auto title = "Soccer Champions";

    std::cout << "The type of score is " << typeid(score).name() << std::endl;
    std::cout << "The type of points is " << typeid(points).name() << std::endl;
    std::cout << "The type of height is " << typeid(height).name() << std::endl;
    std::cout << "The type of duration is " << typeid(duration).name() << std::endl;
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl;
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl;
    // Pkc stands for pointer to const-char or string
    std::cout << "The type of title is " << typeid(title).name() << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
