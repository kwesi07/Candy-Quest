#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib> 
#include <limits>
#include "candy_quest_functions.h"

using namespace std;


void play_game(int mode, int & size) {
    int score = 0;
    int num_moves = 15; // Set number of moves for the Limited Moves Gamemode (Mode 2)
    int move_counter = 0; // To show number of moves used to reach the goal in the Target Score Gamemode (Mode 1)
    vector<string> tiles = {"🍬", "🍭", "🍫", "🍩", "🍦", "🍰"};
    if (mode == 2) {
        cout << "-------------------------------\n";
        cout << "You have " << num_moves << " moves!! Good Luck!!\n";
        cout << "-------------------------------\n";
    }

    while (true) {
        cout << "Input a board size (4 < n < 11): ";
        cin >> size;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please input an integer.\n";
            continue;
        }
        if (size < 5 || size > 10) {
            cout << "Size should be between 4 and 11.\n";
            continue;
        }
        break;
    }

    // Call createBoard function to initially set up the board
    vector<vector<string>> board = create_board(size, tiles);
    while (check(board, size) == 1) {
        create_board(size, tiles);
        check(board, size);
    }
    print_board(size, board);

    while (true) {
        cout << "------------------------\n";
        int row, col;
        char direction;
        cout << "Row, Column, Direction(WASD): ";
        cin >> row >> col >> direction;
        // Go back to the main menu
        if (toupper(direction) == 'Q') {
            if (confirm_quit()) {
                score = 0;
                break;
            }
            else {
                continue;
            }
        }

        // Validate direction
        if (toupper(direction) != 'W' && toupper(direction) != 'A' && toupper(direction) != 'S' && toupper(direction) != 'D') {
            cout << "Invalid direction. You can only swap UP(W), LEFT(A), RIGHT(D), or DOWN(S)\n";
            continue;
        }

        cout << "------------------------\n";
        direction = toupper(direction);
        make_move(row, col, direction, board, size);
        num_moves -= 1;
        move_counter += 1;

        if (check(board, size) == 0) {
            cout << "Score: " << score << " pts\n";
            // Check end condition
            if (mode == 1 && score >= 150) {
                cout << "You used " << move_counter << " moves to reach the goal!\n";
                cout << "YOU WON!!!\n";
                score = 0;
                break;
            }
            else if (mode == 2 && num_moves == 0) {
                cout << "Your final score was " << score << "!!!\n";
                cout << "Thanks for playing! See you next time!!\n";
                score = 0;
                break;
            }
        }

        if (mode == 1) {
            cout << "You have made " << move_counter << " moves.\n";
        }
        else if (mode == 2) {
            cout << "You have " << num_moves << " left.\n";
        }
    }
}
