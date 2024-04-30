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
	vector<vector<string>> board; // initializing the board
	board = create_board(size, tiles); // creating the board
	choose_game_mode(pointer_position_main, size); // choosing the game mode
	main_menu(pointer_position_main); // displaying the main menu
}

