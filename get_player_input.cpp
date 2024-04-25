#include <iostream>
#include <string>
#include "candy_quest_functions.h"

char get_player_input() {
    char player_input;
    std::cout << "Enter your choice (W/S to move pointer, Y to enter): ";
    std::cin >> player_input;
    return toupper(player_input);
}
