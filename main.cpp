#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include "candy_quest_functions.h"
#include <vector>

using namespace std;



int main() {
	introductions();
	instructions();
	vector<string> tiles = {"🍰", "🍡", "🍭", "🍬", "🍫", "🍧", "🍦", "🍩"};
	int score = 0, size = 0, pointer_position_main = 0; //setting preeset size for demo and initializing score to 0
	choose_game_mode(pointer_position_main, size);
	main_menu(pointer_position_main);
}

