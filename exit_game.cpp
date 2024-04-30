#include <iostream>
using namespace std;
#include <string>
#include "candy_quest_functions.h"
#include <cstdlib>

void exit_game() {
    if (confirm_quit()) { //if user confirms they want to quit
        std::cout << "Thanks for playing! Goodbye!" << std::endl;
        std::cout << "Created by Group 199" << std::endl;
        std::cout << "Owusu-Ofori Kwesi" << std::endl;
        std::cout << "Runhao Zheng" << std::endl;
        print_candy_quest_art(); //print the game art
	exit(0); //exit the game
    }
}
