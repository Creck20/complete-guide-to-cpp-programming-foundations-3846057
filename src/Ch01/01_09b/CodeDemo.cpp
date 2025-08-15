// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    // Declare name variable
    std::string name;

    // Message to console screen
    std::cout << "Please enter your name: " << std::flush;

    // Accept user input and store in name
    std::cin >> name;

    // Display welcome message
    std::cout << "Welcome, " << name << "!\n\n";
    return 0;
}