#include "candy_quest_functions.h"
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

void show_demo() { //function to show the demo
    int score, size;
    score = 0;
    size = 5;
    print_with_delay("\n---- WELCOME TO CANDY QUEST DEMO ----");
    cin.ignore();
    print_with_delay("\nPress enter to continue...");
    cin.get();
    vector<string> tiles = {"🍰", "🍡", "🍭", "🍬", "🍫", "🍧", "🍦", "🍩"};
    vector<vector<string>> predefined_board = {
        {"🍡", "🍭", "🍰", "🍧", "🍰"},
        {"🍦", "🍧", "🍡", "🍰", "🍩"},
        {"🍧", "🍭", "🍡", "🍩", "🍧"},
        {"🍩", "🍭", "🍧", "🍦", "🍬"},
        {"🍡", "🍦", "🍬", "🍬", "🍧"},
    };
    print_with_delay("\nWelcome to the Candy Kingdom, sweet traveler!");
    this_thread::sleep_for(chrono::seconds(2));
    print_with_delay("You, the Candy Explorer, are about to embark on a delightful adventure!");
    this_thread::sleep_for(chrono::seconds(2));
    cin.ignore();
    print_with_delay("\nPress Enter to start your sweet journey...");
    cin.get();

    vector<tuple<int, int, char, string>> demo_moves = {
        {0, 1, 'S', "If you can spot it, we can slide the candy in row 0 column 1 down(🍭) to match!"},
        {1, 3, 'W', "We are doing so well. Now I see our next target in row 1 column 3(🍰). Lets swap that up!"},
        {3, 4, 'X', "The next move is row 3 column 4(🍬) direction X."},  // Demonstrating an invalid move
        {3, 4, 'S', "We can fix this by swapping the same candy 🍬 with the candy one below!."}
    };

    print_board(size, predefined_board);
    for (int i = 0; i < demo_moves.size(); ++i) {
        //prints instruction
        print_with_delay(get<3>(demo_moves[i]));
        int row = get<0>(demo_moves[i]);
        int col = get<1>(demo_moves[i]);
        char direction = get<2>(demo_moves[i]);
        string instruction = get<3>(demo_moves[i]);
        cin.ignore();
        print_with_delay("\nPress Enter to move the candy...");
        cin.get();
        print_with_delay(string("\nMaking move: ") + to_string(row) + " " + to_string(col) + " " + direction + "...");
        this_thread::sleep_for(chrono::seconds(1));
        make_move(row, col, direction, predefined_board, size);
        //if there is a valid match
        while (check(predefined_board, size)) {
            match_check(predefined_board, score, size);
            this_thread::sleep_for(chrono::seconds(1));
            print_board(size, predefined_board);
            print_with_delay("\nDropping fruits...\n");
            drop(predefined_board, size);
            this_thread::sleep_for(chrono::seconds(1));
            print_board(size, predefined_board);
            print_with_delay("\nFilling fruits...\n");
            fill(predefined_board, size);
            this_thread::sleep_for(chrono::seconds(1));
            print_board(size, predefined_board);
        }
    }
}
