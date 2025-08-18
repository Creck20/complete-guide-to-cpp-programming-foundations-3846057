// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    // Not putting f at the end of the expression turns it into a double hover mouse to see.
    target_x = -123.45;

    // Implicit type conversion: expect -123
    sprite_x = target_x;

    // player_x does not support negative numbers, so the data will be stored in memory as the two's compliment number.
    player_x = sprite_x;

    // Print out types with implicit casting:
    std::cout << "target_x (float) " << target_x << std::endl;
    std::cout << "sprite_x (int32) " << sprite_x << std::endl;
    std::cout << "player_x (unsigned int32) " << player_x << "\n\n";

    // Print out types with explicit casting: 
    std::cout << "player_x (unsigned int32) " << static_cast<int32_t>(player_x) << std::endl;



    std::cout << std::endl << std::endl;
    return 0;
}
