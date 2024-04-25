#include "candy_quest_functions.h"
#include <vector>
#include <string>

void fill(vector<vector<string> >& board, int size) { //to fill up empty spaces after tiles have been dropped
    vector<string> tiles = {"🍡", "🍭", "🍬", "🍫", "🍧", "🍦", "🍩"};
    
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (board[row][col] == "  ") {
                board[row][col] = tiles[rand() % tiles.size()];
            }
        }
    }
}