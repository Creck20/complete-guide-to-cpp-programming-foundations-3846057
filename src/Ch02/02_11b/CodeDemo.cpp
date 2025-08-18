// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    // Performing interger division: Quotient of 5/9 = 0
    // celsius = (5 / 9) * (fahrenheit - 32);

    // Two valid options used: explicitly cast 5 to float and convert 9 to 9.0 (a double)
    // celsius = (static_cast<float>(5) / 9.0) * (fahrenheit - 32);

    // Also seems to work if you add the f to make 5.0 and 9.0 floats.
    celsius = (5.0f / 9.0f) * (fahrenheit - 32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    // Static cast weight to int
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    // C style cast used to get the above value, subtract decimal part and move decimla point 4 spaces to the left. Note that the data is not 9900. 
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
