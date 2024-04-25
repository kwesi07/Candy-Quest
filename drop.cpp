#include "candy_quest_functions.h"
#include <vector>
#include <string>


void drop(vector<vector<string>>& board, int size) { //to drop existing tiles onto any empty spaces below them
    for (int i = 0; i < size; i++) {
        for (int col = 0; col < size; col++) {
            for (int row = 0; row < size - 1; row++) {
                if (board[row + 1][col] == "  ") {
                    swap(board[row][col], board[row + 1][col]);
                }
            }
        }
    }
}
