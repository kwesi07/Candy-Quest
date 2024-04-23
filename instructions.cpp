#include <iostream>
#include <chrono>
#include <thread>
#include "candy_quest_functions.h"

void instructions() {
    print_with_delay("\nPay attention, my Dear Explorer...");
    print_with_delay("\n RULES & INSTRUCTIONS ");
    print_with_delay("1. Please choose the size of the board ranging from 5 x 5 to 10 x 10.");
    print_with_delay("2. To swap candy, input the location as follows: Row Column Direction(W/A/S/D).");
    print_with_delay("   Example: If the candy is in row 1, column 2, and you want to swap it down, enter: 1 2 S.");
    print_with_delay("3. To quit the game, input \"Q\".");
    print_with_delay("4. For extra assistance, refer to the demo in the main menu.\n");
}

