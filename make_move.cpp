#include <iostream>
#include <vector>
#include "candy_quest_functions.h"
#include <string>
using namespace std;

void make_move(int r, int c, char direction, vector<vector<string>>& board, int size) {
    // Swaps tile at row, col upwards
    if (direction == 'W' && r > 0) {
        swap(board[r][c], board[r - 1][c]);
    }
    // Swaps tile at row, col rightwards
    else if (direction == 'D' && c < size - 1) {
        swap(board[r][c], board[r][c + 1]);
    }
    // Swaps tile at row, col downwards
    else if (direction == 'S' && r < size - 1) {
        swap(board[r][c], board[r + 1][c]);
    }
    // Swaps tile at row, col leftwards
    else if (direction == 'A' && c > 0) {
        swap(board[r][c], board[r][c - 1]);
    }
    // If edge pieces are moved out of bounds
    else {
        cout << "\nInvalid move. Please try again.\n" << endl;
        print_board(size, board);

    }
	print_board( size, board);
}
