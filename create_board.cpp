#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "candy_quest_functions.h"

using namespace std;

vector<vector<string>> create_board(int size, const vector<string>& tiles) {
	cout << "creating board" << endl;
    vector<vector<string>> board;

    // Seed the random number generator
    random_device rd;
    mt19937 gen(rd());

    // Define the distribution for generating random indices
    uniform_int_distribution<> dis(0, tiles.size() - 1);

    // Create the new board
    for (int i = 0; i < size; ++i) {
        vector<string> tempRow;
        for (int j = 0; j < size; ++j) {
            // Add a random tile from the tiles vector to the row
            tempRow.push_back(tiles[dis(gen)]);
        }
        // Add the row to the board
        board.push_back(tempRow);
    }
	return board;
}


