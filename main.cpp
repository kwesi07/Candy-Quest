#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include "candy_quest_functions.h"
#include <vector>

using namespace std;



int main() {
	vector<string> tiles = {"🍰", "🍡", "🍭", "🍬", "🍫", "🍧", "🍦", "🍩"};
	int score = 0, size = 5; //setting preeset size for demo and initializing score to 0
	//introductions();
	vector<vector<string>> board;
	board = create_board(size, tiles);
	print_board(size, board);
	
}

