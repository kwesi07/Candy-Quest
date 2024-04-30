#include <iostream>
#include <vector>
#include <string>
#include "candy_quest_functions.h"
using namespace std;


void print_board(int size ,const vector<vector<string>> board){ //prints the board
  //  clear_screen();	
    cout << string(size * 3 + 1, '-') << endl;
    for (size_t i = 0; i < board.size(); ++i) {
        cout << i << " ";
        for (size_t j = 0; j < board[i].size(); ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "  ";
    for (int i = 0; i < size; ++i) {
        cout << i << "  ";
    }
    cout << endl;
    cout << string(size * 3 + 1, '-') << endl;

} 
