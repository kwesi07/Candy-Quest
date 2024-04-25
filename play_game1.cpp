void play_game(int mode, int& size) {
    int numofmoves = 15; // set number of moves for the Limited Moves Gamemode (Mode 2)
    int movecounter = 0; // to show number of moves used to reach the goal in the Target Score Gamemode (Mode 1)

    if (mode == 2) {
        cout << "-------------------------------" << endl;
        cout << "You have " << numofmoves << " moves!! Good Luck!!" << endl;
        cout << "-------------------------------" << endl;
    }

    // Create the game board
    vector<vector<string>> board;
    create_board(board, size);

    while (check(board, size) == 1) {
        create_board(board, size);
        check(board, size);
    }
    print_board(board, size);

    // Gameplay loop
    while (true) {
        cout << "------------------------" << endl;
        cout << "Row, Column, Direction(WASD): ";
        int row, col;
        char direction;
        cin >> row >> col >> direction;

        // Go back to the main menu
        if (toupper(direction) == 'Q') {
            if (confirm_quit()) {
                score = 0;
                break;
            } else {
                continue;
            }
        }

        make_move(row, col, toupper(direction), board, size);
        numofmoves--;
        movecounter++;

        // No matches
        if (check(board, size) == 0) {
            sleep(1);
            print_board(board, size);
        }

        // If there is a valid match
        while (check(board, size)) {
            match_check(board, score, size);
            sleep(1);
            print_board(board, size);
            cout << "\nDropping fruits...\n" << endl;
            drop(board, size);
            sleep(1);
            print_board(board, size);
            cout << "\nFilling fruits...\n" << endl;
            fill(board, size);
            sleep(1);
            print_board(board, size);
        }
        cout << "Score: " << score << " pts" << endl;

        if (mode == 1) {
            cout << "You have made " << movecounter << " moves." << endl;
            // Check end condition
            if (score >= 150) {
                cout << "You used " << movecounter << " moves to reach the goal!" << endl;
                cout << "YOU WON!!!" << endl;
                score = 0;
                break;
            }
        }

        if (mode == 2) {
            cout << "You have " << numofmoves << " left." << endl;
            // Check end condition
            if (numofmoves == 0) {
                cout << "Your final score was " << score << "!!!" << endl;
                cout << "Thanks for playing! See you next time!!" << endl;
                score = 0;
                break;
            }
        }
    }
}
