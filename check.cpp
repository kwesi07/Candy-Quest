#include <vector>
#include <iostream>
#include "candy_quest_functions.h"

using namespace std;

int check(const vector<vector<string>>& board, int size) {
    // Sideways 3 check
    for (int r = 0; r < size; ++r) {
        for (int c = 0; c < size - 2; ++c) {
            if (board[r][c] == board[r][c + 1] && board[r][c] == board[r][c + 2]) {
                return 1;
            }
        }
    }
    
    // Vertical 3 check
    for (int c = 0; c < size; ++c) {
        for (int r = 0; r < size - 2; ++r) {
            if (board[r][c] == board[r + 1][c] && board[r][c] == board[r + 2][c]) {
                return 1;
            }
        }
    }

    // Sideways 4 check
    for (int r = 0; r < size; ++r) {
        for (int c = 0; c < size - 3; ++c) {
            if (board[r][c] == board[r][c + 1] && board[r][c] == board[r][c + 2] && board[r][c] == board[r][c + 3]) {
                return 1;
            }
        }
    }
    
    // Vertical 4 check
    for (int c = 0; c < size; ++c) {
        for (int r = 0; r < size - 3; ++r) {
            if (board[r][c] == board[r + 1][c] && board[r][c] == board[r + 2][c] && board[r][c] == board[r + 3][c]) {
                return 1;
            }
        }
    }

    // Sideways 5 check
    for (int r = 0; r < size; ++r) {
        for (int c = 0; c < size - 4; ++c) {
            if (board[r][c] == board[r][c + 1] && board[r][c] == board[r][c + 2] && board[r][c] == board[r][c + 3] && board[r][c] == board[r][c + 4]) {
                return 1;
            }
        }
    }
    
    // Vertical 5 check
    for (int c = 0; c < size; ++c) {
        for (int r = 0; r < size - 4; ++r) {
            if (board[r][c] == board[r + 1][c] && board[r][c] == board[r + 2][c] && board[r][c] == board[r + 3][c] && board[r][c] == board[r + 4][c]) {
                return 1;
            }
        }
    }

    // Sideways 6 check
    for (int r = 0; r < size; ++r) {
        for (int c = 0; c < size - 5; ++c) {
            if (board[r][c] == board[r][c + 1] && board[r][c] == board[r][c + 2] && board[r][c] == board[r][c + 3] && board[r][c] == board[r][c + 4] && board[r][c] == board[r][c + 5]) {
                return 1;
            }
        }
    }
    
    // Vertical 6 check
    for (int c = 0; c < size; ++c) {
        for (int r = 0; r < size - 5; ++r) {
            if (board[r][c] == board[r + 1][c] && board[r][c] == board[r + 2][c] && board[r][c] == board[r + 3][c] && board[r][c] == board[r + 4][c] && board[r][c] == board[r + 5][c]) {
                return 1;
            }
        }
    }

    return 0;
}
