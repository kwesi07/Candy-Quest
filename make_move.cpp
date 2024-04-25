#include <iostream>
#include <vector>
#include "candy_quest_functions.h"

void make_move(int r, int c, char direction, std::vector<std::vector<std::string>>& board, int size) {
    // Swaps tile at row, col upwards
    if (direction == 'W' && r > 0) {
        std::swap(board[r][c], board[r - 1][c]);
    }
    // Swaps tile at row, col rightwards
    else if (direction == 'D' && c < size - 1) {
        std::swap(board[r][c], board[r][c + 1]);
    }
    // Swaps tile at row, col downwards
    else if (direction == 'S' && r < size - 1) {
        std::swap(board[r][c], board[r + 1][c]);
    }
    // Swaps tile at row, col leftwards
    else if (direction == 'A' && c > 0) {
        std::swap(board[r][c], board[r][c - 1]);
    }
    // If edge pieces are moved out of bounds
    else {
        std::cout << "\nInvalid move. Please try again.\n" << std::endl;
        print_board(size, board);
    }
}