#include <iostream>
#include <string>
#include "candy_quest_functions.h"

char get_player_input() {
    std::string player_input;
    std::cin >> player_input;
    return toupper(player_input[0]);
}
