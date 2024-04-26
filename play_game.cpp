#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <ctime> 
#include <cstdlib> 
#include <limits>
#include "candy_quest_functions.h"


using namespace std;


void play_game(int mode, int & size) {
    vector<string> tiles  =  {"🍰", "🍡", "🍭", "🍬", "🍫", "🍧", "🍦", "🍩"};
    int score = 0;
    int num_moves = 15; // Set number of moves for the Limited Moves Gamemode (Mode 2)
    int move_counter = 0; // To show number of moves used to reach the goal in the Target Score Gamemode (Mode 1)
   // vector<string> tiles = {"🍬", "🍭", "🍫", "🍩", "🍦", "🍰"};
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
    
    remove_match(board, size);
   while (true) {//remove  initial matches
   	if (remove_match(board, size) == 0)
		break;
	}	
    print_board(size, board);

    while (true) {
        cout << "------------------------\n";
        int row, col;
        char direction;
        cout << "Row, Column, Direction(WASD): ";
	// validate if the user put in exactly 3 inputs
	if (!(cin >> row >> col >> direction)) {
        	cout << "Invalid input format. First two are integers and last is a character. Please provide three entries.\n";
        	cin.clear();
        	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	// Check if the row and column are within the board size
	if (row < 0 || row >= size || col < 0 || col >= size) {
    		cout << "Invalid input. Row and column should be within the board size.\n";
    		continue;
	}	
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
	//validate that user made three entries
        // Validate direction
        if (toupper(direction) != 'W' && toupper(direction) != 'A' && toupper(direction) != 'S' && toupper(direction) != 'D') {
            cout << "Invalid direction. You can only swap UP(W), LEFT(A), RIGHT(D), or DOWN(S)\n";
            continue;
        }

        cout << "------------------------\n";
        direction = toupper(direction);
        make_move(row, col, direction, board, size);
        match_check(board, score, size);
        print_board(size, board);
        //Make the move the user did by changing tiles in board
	make_move(row, col, direction, board, size);
        num_moves -= 1;
        move_counter += 1;
	
	while (check(board, size)){
		match_check( board, score, size);
		this_thread::sleep_for(chrono::seconds(1));
	//	print_board(size, board);
		cout << "\nDropping fruits...\n";
		//tiles drop down
		drop(board, size);
		this_thread::sleep_for(chrono::seconds(1));
		print_board(size, board);
		cout << "\nFilling fruits...\n";
		//whitespaces filled
		fill(board, size);
		this_thread::sleep_for(chrono::seconds(1));
		print_board(size, board);
        	cout << "Score: " << score << "pts" << endl;

	}
        if (check(board, size) == 0) {
            cout << "Score: " << score << " pts\n";
            // Check end condition
            if (mode == 1 && score >= 150) {
                cout << "You used " << move_counter << " moves to reach the goal!\n";
                cout << "YOU WON!!!\n";
                cout << "Press Enter to continue..." << endl;
                highscore(move_counter, mode);
                cin.ignore();
                score = 0;
                break;
            }
            else if (mode == 2 && num_moves == 0) {
                cout << "Your final score was " << score << "!!!\n";
                cout << "Thanks for playing! See you next time!!\n";
                highscore(score, mode);
                cout << "Press Enter to continue..." << endl;
                cin.ignore();
                score = 0;
                break;
                
            }
        }

        if (mode == 1) {
            cout << "You have made " << move_counter << " moves.\n";
        }
        else if (mode == 2) {
            cout << "You have " << num_moves << " moves left.\n";
        }
    }
}

