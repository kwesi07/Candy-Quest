#include "candy_quest_functions.h"
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <thread>
#include <chrono>
using namespace std;

int remove_match(vector<vector<string>>& board, int& score, int size) {
    //sideways 5 check
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size - 4; ++col) {
            if (board[row][col] == board[row][col + 1] && board[row][col + 1] == board[row][col + 2] && board[row][col + 2] == board[row][col + 3] && board[row][col + 3] == board[row][col + 4]) {
                board[row][col] = "  ";
                board[row][col + 1] = "  ";
                board[row][col + 2] = "  ";
                board[row][col + 3] = "  ";
                board[row][col + 4] = "  ";
                drop(board, size);
                fill(board, size);
                return 1;
            }
        }
    }
    //vertical 5 check
    for (int col = 0; col < size; ++col) {
        for (int row = 0; row < size - 4; ++row) {
            if (board[row][col] == board[row + 1][col] && board[row + 1][col] == board[row + 2][col] && board[row + 2][col] == board[row + 3][col] && board[row + 3][col] == board[row + 4][col]) {
                board[row][col] = "  ";
                board[row + 1][col] = "  ";
                board[row + 2][col] = "  ";
                board[row + 3][col] = "  ";
                board[row + 4][col] = "  ";
                drop(board, size);
                fill(board, size);
                return 1;
            }
        }
    }
    //sideways 4 check
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size - 3; ++col) {
            if (board[row][col] == board[row][col + 1] && board[row][col + 1] == board[row][col + 2] && board[row][col + 2] == board[row][col + 3]) {
                board[row][col] = "  ";
                board[row][col + 1] = "  ";
                board[row][col + 2] = "  ";
                board[row][col + 3] = "  ";
                drop(board, size);
                fill(board, size);
                return 1;
            }
        }
    }
    //vertical 4 check
    for (int col = 0; col < size; ++col) {
        for (int row = 0; row < size - 3; ++row) {
            if (board[row][col] == board[row + 1][col] && board[row + 1][col] == board[row + 2][col] && board[row + 2][col] == board[row + 3][col]) {
                board[row][col] = "  ";
                board[row + 1][col] = "  ";
                board[row + 2][col] = "  ";
                board[row + 3][col] = "  ";
                drop(board, size);
                fill(board, size);
                return 1;
            }
        }
    }
    //sideways 3 check
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size - 2; ++col) {
            if (board[row][col] == board[row][col + 1] && board[row][col + 1] == board[row][col + 2]) {
                board[row][col] = "  ";
                board[row][col + 1] = "  ";
                board[row][col + 2] = "  ";
                drop(board, size);
                fill(board, size);
                return 1;
            }
        }
    }
    //vertical 3 check
    for (int col = 0; col < size; ++col) {
        for (int row = 0; row < size - 2; ++row) {
            if (board[row][col] == board[row + 1][col] && board[row + 1][col] == board[row + 2][col]) {
                board[row][col] = "  ";
                board[row + 1][col] = "  ";
                board[row + 2][col] = "  ";
                drop(board, size);
                fill(board, size);
                return 1;
            }
        }
    }
    return 0;
}