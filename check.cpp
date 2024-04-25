#include <vector>
#include <iostream>
using namespace std;
#include "candy_quest_functions.h"


int check(const vector<vector<string> >& board, int size) {
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
    return 0;
}
